//
// Created by hanji on 2024/10/20.
//

#include "shaderconv.h"

char* (*optimize_shader)(const char * const *src, unsigned int type, unsigned int glsl, unsigned int essl);

char* MesaConvertShader(const char * const *src, unsigned int type, unsigned int glsl, unsigned int essl) {
    return optimize_shader(src, type, glsl, essl);
}