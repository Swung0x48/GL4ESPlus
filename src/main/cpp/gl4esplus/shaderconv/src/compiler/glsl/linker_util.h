/*
 * Copyright © 2018 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef GLSL_LINKER_UTIL_H
#define GLSL_LINKER_UTIL_H

#include "list.h"

struct gl_shader_program;
struct gl_uniform_storage;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Sometimes there are empty slots left over in UniformRemapTable after we
 * allocate slots to explicit locations. This struct represents a single
 * continouous block of empty slots in UniformRemapTable.
 */
struct empty_uniform_block {
   struct exec_node link;
   /* The start location of the block */
   unsigned start;
   /* The number of slots in the block */
   unsigned slots;
};

void
linker_error(struct gl_shader_program *prog, const char *fmt, ...);

void
linker_warning(struct gl_shader_program *prog, const char *fmt, ...);

bool
link_util_should_add_buffer_variable(struct gl_shader_program *prog,
                                     struct gl_uniform_storage *uniform,
                                     int top_level_array_base_offset,
                                     int top_level_array_size_in_bytes,
                                     int second_element_offset,
                                     int block_index);

bool
link_util_add_program_resource(struct gl_shader_program *prog,
                               struct set *resource_set,
                               GLenum type, const void *data, uint8_t stages);

int
link_util_find_empty_block(struct gl_shader_program *prog,
                           struct gl_uniform_storage *uniform);

void
link_util_update_empty_uniform_locations(struct gl_shader_program *prog);

#ifdef __cplusplus
}
#endif

#endif /* GLSL_LINKER_UTIL_H */
