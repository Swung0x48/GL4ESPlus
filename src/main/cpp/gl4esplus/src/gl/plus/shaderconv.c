//
// Created by hanji on 2024/10/13.
//

#include <stdio.h>
#include <string.h>

#include "../../../spirv-cross/include/spirv_cross_c.h"
#include "../../../shaderc/include/shaderc.h"
#include "../../config.h"
#include "../../glx/hardext.h"
#include "../init.h"
#include "../const.h"
#include "../gles.h"
#include "../string_utils.h"
#include "../shader.h"
#include "../shaderconv.h"
#include "../../../shaderconv/src/shaderconv/shaderconv.h"

//#define DEBUG
#ifdef DEBUG
#define DBG(a) a
#else
#define DBG(a)
#endif

static spvc_context context = NULL;
static shaderc_compiler_t compiler = NULL;

void error_callback(void* context, const char* str) {
    printf("SPVC Error! \n%s\n", str);
}

unsigned int getType(int a1)
{
    unsigned int v2;
    switch ( a1 )
    {
        case 35632:
            v2 = 4;
            break;
        case 35633:
            v2 = 0;
            break;
        case 36313:
            v2 = 3;
            break;
        case 36487:
            v2 = 2;
            break;
        case 36488:
            v2 = 1;
            break;
        case 37305:
            v2 = 5;
            break;
        default:
            v2 = -1;
            break;
    }
    return v2;
}

char * conv(char * source, int type) {
    return MesaConvertShader(source, type, 460, 320);
}

static char* g_convert_result = NULL;
static size_t g_convert_length = 0;

char * Convert(struct shader_s * glshader) {

    DBG(printf("input shader:\n%s\n", glshader->source);)

    //Use holy to convert fpe shader
    if (!strncmp(glshader->source, "// FPE_Shader", 13)) {
        DBG(printf("FPE Shader detected, use gl4es.\n");)
        return ConvertShader(glshader->source, glshader->type == GL_VERTEX_SHADER ? 1 : 0, &glshader->need);
    }

    //Use ltw to convert other shader
    DBG(printf("use plus.\n");)
    PreConvert();

    char * result = MesaConvertShader(glshader->source, glshader->type == GL_VERTEX_SHADER ? 35633 : 35632, 460LL, 320);
    DBG(printf("result shader:\n%s\n", result);)

    return result;

/*
    if (context == NULL) {
        spvc_context_create(&context);
        if (context == NULL) {
            printf("SPVC Context could not be created!\n");
        }
    }
    if (compiler == NULL) {
        compiler = shaderc_compiler_initialize();
        if (compiler == NULL) {
            printf("Compiler could not be created!\n");
        }
    }

    //printf("Input GLSL:\n%s", *string);

    shaderc_compile_options_t opts = shaderc_compile_options_initialize();
    shaderc_compile_options_set_forced_version_profile(opts, 450, shaderc_profile_core);
    shaderc_compile_options_set_auto_map_locations(opts, false);
    shaderc_compile_options_set_auto_bind_uniforms(opts, false);
    shaderc_compile_options_set_target_env(opts, shaderc_target_env_opengl, shaderc_env_version_opengl_4_5);

    shaderc_compilation_result_t outSPIRVRes = shaderc_compile_into_spv(compiler, glshader->source,
                                                                        strlen(glshader->source),
                                                                        glshader->type == GL_VERTEX_SHADER ?
                                                                        shaderc_glsl_vertex_shader : shaderc_glsl_fragment_shader,
                                                                        glshader->type == GL_VERTEX_SHADER ? "vertex_shader" : "fragment_shader",
                                                                        "main", opts);
    if (shaderc_result_get_compilation_status(outSPIRVRes) != shaderc_compilation_status_success) {
        //printf("GLSL to SPIRV comp failed!\n%s\n", shaderc_result_get_error_message(outSPIRVRes));
        printf("\nShaderc compile failed, use holy gl4es.\n");
        spvc_context_release_allocations(context);
        return ConvertShaderConditionally(glshader);
    } else
        printf("\nShaderc compile success, use plus.\n");

    spvc_parsed_ir ir = NULL;
    spvc_context_set_error_callback(context, &error_callback, NULL);
    spvc_context_parse_spirv(context, (const SpvId *) shaderc_result_get_bytes(outSPIRVRes),
                             shaderc_result_get_length(outSPIRVRes) / sizeof(SpvId), &ir);

    shaderc_result_release(outSPIRVRes);

    spvc_compiler compiler_glsl = NULL;
    spvc_context_create_compiler(context, SPVC_BACKEND_GLSL, ir, SPVC_CAPTURE_MODE_TAKE_OWNERSHIP, &compiler_glsl);

    spvc_compiler_options options = NULL;
    spvc_compiler_create_compiler_options(compiler_glsl, &options);
    spvc_compiler_options_set_uint(options, SPVC_COMPILER_OPTION_GLSL_VERSION, 300);
    spvc_compiler_options_set_bool(options, SPVC_COMPILER_OPTION_GLSL_ENABLE_420PACK_EXTENSION, SPVC_FALSE);
    spvc_compiler_options_set_bool(options, SPVC_COMPILER_OPTION_GLSL_ES, SPVC_TRUE);
    spvc_compiler_options_set_bool(options, SPVC_COMPILER_OPTION_GLSL_ES_DEFAULT_FLOAT_PRECISION_HIGHP, SPVC_TRUE);
    spvc_compiler_install_compiler_options(compiler_glsl, options);
    const char *result = NULL;
    spvc_compiler_compile(compiler_glsl, &result);

    const char* converted = result;

    //printf("Output GLSL ES:\n%s", converted);

    int l = strlen(converted);

    if (l >= g_convert_length) {
        free(g_convert_result);
        g_convert_length = (l + 1) * 2;
        g_convert_result = (char*) malloc(g_convert_length * sizeof(char));
    }

//    char* cpy = (char*) malloc(l * sizeof(char));
    strcpy(g_convert_result, converted);

    spvc_context_release_allocations(context);

    return g_convert_result;
    */
}

char * ConvertShaderPlus(struct shader_s * glshader) {
    return Convert(glshader);
}