//
// Created by hanji on 2024/10/20.
//

#include <stddef.h>
#include <linux/limits.h>
#include <dlfcn.h>
#include <string.h>
#include <stdio.h>
#include "init.h"

extern char* (*optimize_shader)(const char * const *src, unsigned int type, unsigned int glsl, unsigned int essl);

static const char *path_prefix[] = {
        "",
        "/opt/vc/lib/",
        "/usr/local/lib/",
        "/usr/lib/",
        NULL,
};

static const char *lib_ext[] = {
        "so",
        "so.1",
        "so.2",
        "dylib",
        "dll",
        NULL,
};

void *open_lib(const char **names, const char *override) {
    void *lib = NULL;

    char path_name[PATH_MAX + 1];
    int flags = RTLD_LOCAL | RTLD_NOW;
    if (override) {
        if ((lib = dlopen(override, flags))) {
            strncpy(path_name, override, PATH_MAX);
            return lib;
        } else {
            printf("LIBGL_GLES override failed: %s\n", dlerror());
        }
    }
    for (int p = 0; path_prefix[p]; p++) {
        for (int i = 0; names[i]; i++) {
            for (int e = 0; lib_ext[e]; e++) {
                snprintf(path_name, PATH_MAX, "%s%s.%s", path_prefix[p], names[i], lib_ext[e]);
                if ((lib = dlopen(path_name, flags))) {
                    return lib;
                }
            }
        }
    }
    return lib;
}

void MesaConverterInit() {
    const char *glslconv_name[] = {"libltw", NULL};
    void* glslconv = open_lib(glslconv_name, "libltw");
    if (glslconv == NULL) {
        printf("libltw not found\n");
    }
    else {
        optimize_shader = dlsym(glslconv, "optimize_shader");
        if (optimize_shader) {
            printf("libltw loaded\n");
        }
    }
}