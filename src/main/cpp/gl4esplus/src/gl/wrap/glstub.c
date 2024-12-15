#include "stub.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../attributes.h"
#include "../init.h"

#define STUB(ret, def, args)\
ret APIENTRY_GL4ES gl4es_ ## def args {\
    if(!globals4es.silentstub)\
        printf("stub: %s;\n", #def);\
} \
AliasExport(ret,def,,args);

#define STUB_INT(ret, def, args)\
ret APIENTRY_GL4ES gl4es_ ## def args {\
    if(!globals4es.silentstub)\
        printf("stub: %s;\n", #def);   \
    return 0;                          \
} \
AliasExport(ret,def,,args);

/*STUB(void,glFogCoordd,(GLdouble coord));
STUB(void,glFogCoordf,(GLfloat coord));
STUB(void,glFogCoorddv,(const GLdouble *coord));
STUB(void,glFogCoordfv,(const GLfloat *coord));*/
#ifdef BCMHOST
STUB(void,glDiscardFramebufferEXT,(GLenum target, GLsizei numAttachments, const GLenum *attachments));
#endif

/*
STUB(void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha))
STUB(void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha))
*/
STUB(void,glClearAccum,(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha));
//STUB(void,glColorMaterial,(GLenum face, GLenum mode));
STUB(void,glCopyPixels,(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type));
STUB(void,glDrawBuffer,(GLenum mode));
STUB(void,glEdgeFlag,(GLboolean flag));
STUB(void,glIndexf,(GLfloat c));
STUB(void,glPolygonStipple,(const GLubyte *mask));
//STUB(void,glReadBuffer,(GLenum mode));
//STUB(void glSecondaryColor3f(GLfloat r, GLfloat g, GLfloat b));
STUB(void,glColorTable,(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table));

STUB(void,glAccum,(GLenum op, GLfloat value));
STUB(void,glPrioritizeTextures,(GLsizei n, const GLuint *textures, const GLclampf *priorities));
//STUB(void,glPixelMapfv,(GLenum map, GLsizei mapsize, const GLfloat *values));
//STUB(void,glPixelMapuiv,(GLenum map,GLsizei mapsize, const GLuint *values));
//STUB(void,glPixelMapusv,(GLenum map,GLsizei mapsize, const GLushort *values));
STUB(void,glPassThrough,(GLfloat token));
STUB(void,glIndexMask,(GLuint mask));
//STUB(void,glGetPixelMapfv,(GLenum map, GLfloat *data));
//STUB(void,glGetPixelMapuiv,(GLenum map, GLuint *data));
//STUB(void,glGetPixelMapusv,(GLenum map, GLushort *data));
STUB(void,glClearIndex,(GLfloat c));
STUB(void,glGetPolygonStipple,(GLubyte *pattern));
STUB(void,glFeedbackBuffer,(GLsizei size, GLenum type, GLfloat *buffer));
STUB(void,glEdgeFlagv,(GLboolean *flag));
//STUB(void glIndexPointer(GLenum  type,  GLsizei  stride,  const GLvoid *  pointer));

// ================================ GL30 ================================

//STUB(void,glGetStringi,());
//STUB(void,glClearBufferiv,());
//STUB(void,glClearBufferuiv,());
//STUB(void,glClearBufferfv,());
//STUB(void,glClearBufferfi,());
STUB(void,glVertexAttribI1i,(GLuint index, GLint v0));
STUB(void,glVertexAttribI2i,(GLuint index, GLint v0, GLint v1));
STUB(void,glVertexAttribI3i,(GLuint index, GLint v0, GLint v1, GLint v2));
STUB(void,glVertexAttribI4i,(GLuint index, GLint v0, GLint v1, GLint v2, GLint v3));
STUB(void,glVertexAttribI1ui,(GLuint index, GLuint v0));
STUB(void,glVertexAttribI2ui,(GLuint index, GLuint v0, GLuint v1));
STUB(void,glVertexAttribI3ui,(GLuint index, GLuint v0, GLuint v1, GLuint v2));
STUB(void,glVertexAttribI4ui,(GLuint index, GLuint v0, GLuint v1, GLuint v2, GLuint v3));
STUB(void,glVertexAttribI1iv,(GLuint index, const GLint *v));
STUB(void,glVertexAttribI2iv,(GLuint index, const GLint *v));
STUB(void,glVertexAttribI3iv,(GLuint index, const GLint *v));
STUB(void,glVertexAttribI4iv,(GLuint index, const GLint *v));
STUB(void,glVertexAttribI1uiv,(GLuint index, const GLuint *v));
STUB(void,glVertexAttribI2uiv,(GLuint index, const GLuint *v));
STUB(void,glVertexAttribI3uiv,(GLuint index, const GLuint *v));
STUB(void,glVertexAttribI4uiv,(GLuint index, const GLuint *v));
STUB(void,glVertexAttribI4bv,(GLuint index, const GLbyte *v));
STUB(void,glVertexAttribI4sv,(GLuint index, const GLshort *v));
STUB(void,glVertexAttribI4ubv,(GLuint index, const GLubyte *v));
STUB(void,glVertexAttribI4usv,(GLuint index, const GLushort *v));
//STUB(void,glVertexAttribIPointer,());
STUB(void,glGetVertexAttribIiv,(GLuint index, GLenum pname, GLint *params));
STUB(void,glGetVertexAttribIuiv,(GLuint index, GLenum pname, GLuint *params));
STUB(void,glUniform1ui,(GLint location, GLuint v0));
STUB(void,glUniform2ui,(GLint location, GLuint v0, GLuint v1));
STUB(void,glUniform3ui,(GLint location, GLuint v0, GLuint v1, GLuint v2));
STUB(void,glUniform4ui,(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3));
STUB(void,glUniform1uiv,(GLint location, GLsizei count, const GLuint *value));
STUB(void,glUniform2uiv,(GLint location, GLsizei count, const GLuint *value));
STUB(void,glUniform3uiv,(GLint location, GLsizei count, const GLuint *value));
STUB(void,glUniform4uiv,(GLint location, GLsizei count, const GLuint *value));
STUB(void,glGetUniformuiv,(GLuint program, GLint location, GLuint *params));
//STUB(void,glBindFragDataLocation,());
STUB_INT(GLint,glGetFragDataLocation,(GLuint program, const char * name));
STUB(void,glBeginConditionalRender,(GLuint id, GLenum mode));
STUB(void,glEndConditionalRender,(void));
//STUB(void,glMapBufferRange,());
//STUB(void,glFlushMappedBufferRange,());
//STUB(void,glClampColor,());
//STUB(void,glIsRenderbuffer,());
//STUB(void,glBindRenderbuffer,());
//STUB(void,glDeleteRenderbuffers,());
//STUB(void,glGenRenderbuffers,());
//STUB(void,glRenderbufferStorage,());
//STUB(void,glRenderbufferStorageMultisample,());
//STUB(void,glGetRenderbufferParameteriv,());
//STUB(void,glIsFramebuffer,());
//STUB(void,glBindFramebuffer,());
//STUB(void,glDeleteFramebuffers,());
//STUB(void,glGenFramebuffers,());
//STUB(void,glCheckFramebufferStatus,());
//STUB(void,glFramebufferTexture1D,());
//STUB(void,glFramebufferTexture2D,());
//STUB(void,glFramebufferTexture3D,());
//STUB(void,glFramebufferTextureLayer,());
//STUB(void,glFramebufferRenderbuffer,());
//STUB(void,glGetFramebufferAttachmentParameteriv,());
//STUB(void,glBlitFramebuffer,());
//STUB(void,glGenerateMipmap,());
STUB(void,glTexParameterIiv,(GLenum target, GLenum pname, const GLint *params));
STUB(void,glTexParameterIuiv,(GLenum target, GLenum pname, const GLuint *params));
STUB(void,glGetTexParameterIiv,(GLenum target, GLenum pname, GLint *params));
STUB(void,glGetTexParameterIuiv,(GLenum target, GLenum pname, GLuint *params));
STUB(void,glColorMaski,(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a));
STUB(void,glGetBooleani_v,(GLenum pname, GLuint index, GLboolean * data));
STUB(void,glGetIntegeri_v,(GLenum pname, GLuint index, GLint * data));
STUB(void,glEnablei,(GLenum target, GLuint index));
STUB(void,glDisablei,(GLenum target, GLuint index));
STUB_INT(GLboolean,glIsEnabledi,(GLenum target, GLuint index));
STUB(void,glBindBufferRange,(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size));
//STUB(void,glBindBufferBase,());
STUB(void,glBeginTransformFeedback,(GLenum primitiveMode));
STUB(void,glEndTransformFeedback,(void));
STUB(void,glTransformFeedbackVaryings,(GLuint program, GLsizei count, const char **varyings, GLenum bufferMode));
STUB(void,glGetTransformFeedbackVarying,(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, char *name));
//STUB(void,glBindVertexArray,());
//STUB(void,glDeleteVertexArrays,());
//STUB(void,glGenVertexArrays,());
//STUB(void,glIsVertexArray,());

// ================================ GL31 ================================

//STUB(void,glDrawArraysInstanced,());
//STUB(void,glDrawElementsInstanced,());
//STUB(void,glCopyBufferSubData,());
STUB(void,glPrimitiveRestartIndex,(GLuint index));
STUB(void,glTexBuffer,(GLenum target, GLenum internalFormat, GLuint buffer));
STUB(void,glGetUniformIndices,(GLuint program, GLsizei uniformCount, const GLchar **uniformNames, GLuint *uniformIndices));
STUB(void,glGetActiveUniformsiv,(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params));
STUB(void,glGetActiveUniformName,(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName));
STUB_INT(GLuint,glGetUniformBlockIndex,(GLuint program, const GLchar *uniformBlockName));
STUB(void,glGetActiveUniformBlockiv,(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params));
STUB(void,glGetActiveUniformBlockName,(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName));
STUB(void,glUniformBlockBinding,(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding));

// ================================ GL32 ================================

STUB(void,glGetBufferParameteri64v,(GLenum target, GLenum value, GLint64 *data));
//STUB(void,glDrawElementsBaseVertex,());
//STUB(void,glDrawRangeElementsBaseVertex,());
//STUB(void,glDrawElementsInstancedBaseVertex,());
//STUB(void,glMultiDrawElementsBaseVertex,());
STUB(void,glProvokingVertex,(GLenum provokeMode));
STUB(void,glTexImage2DMultisample,(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations));
STUB(void,glTexImage3DMultisample,(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations));
STUB(void,glGetMultisamplefv,(GLenum pname, GLuint index, GLfloat *val));
STUB(void,glSampleMaski,(GLuint maskNumber, GLbitfield mask));
STUB(void,glFramebufferTexture,(GLenum target, GLenum attachment, GLuint texture, GLint level));
//STUB(GLsync,glFenceSync,(GLenum condition, GLbitfield flags));
STUB_INT(GLboolean,glIsSync,(GLsync sync));
//STUB(void,glDeleteSync,(GLsync sync));
//STUB(GLenum,glClientWaitSync,(GLsync sync, GLbitfield flags, GLuint64 timeout));
STUB(void,glWaitSync,(GLsync sync, GLbitfield flags, GLuint64 timeout));
STUB(void,glGetInteger64v,(GLenum pname, GLint64* params));
STUB(void,glGetInteger64i_v,(GLenum target, GLuint index, GLint64* data));
STUB(void,glGetSynciv,(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values));

// ================================ GL33 ================================

STUB(void,glVertexP2ui,(GLenum type, GLuint value));
STUB(void,glVertexP3ui,(GLenum type, GLuint value));
STUB(void,glVertexP4ui,(GLenum type, GLuint value));
STUB(void,glVertexP2uiv,(GLenum type, const GLuint *value));
STUB(void,glVertexP3uiv,(GLenum type, const GLuint *value));
STUB(void,glVertexP4uiv,(GLenum type, const GLuint *value));
STUB(void,glTexCoordP1ui,(GLenum type, GLuint coords));
STUB(void,glTexCoordP2ui,(GLenum type, GLuint coords));
STUB(void,glTexCoordP3ui,(GLenum type, GLuint coords));
STUB(void,glTexCoordP4ui,(GLenum type, GLuint coords));
STUB(void,glTexCoordP1uiv,(GLenum type, const GLuint *coords));
STUB(void,glTexCoordP2uiv,(GLenum type, const GLuint *coords));
STUB(void,glTexCoordP3uiv,(GLenum type, const GLuint *coords));
STUB(void,glTexCoordP4uiv,(GLenum type, const GLuint *coords));
STUB(void,glMultiTexCoordP1ui,(GLenum texture, GLenum type, GLuint coords));
STUB(void,glMultiTexCoordP2ui,(GLenum texture, GLenum type, GLuint coords));
STUB(void,glMultiTexCoordP3ui,(GLenum texture, GLenum type, GLuint coords));
STUB(void,glMultiTexCoordP4ui,(GLenum texture, GLenum type, GLuint coords));
STUB(void,glMultiTexCoordP1uiv,(GLenum texture, GLenum type, const GLuint *coords));
STUB(void,glMultiTexCoordP2uiv,(GLenum texture, GLenum type, const GLuint *coords));
STUB(void,glMultiTexCoordP3uiv,(GLenum texture, GLenum type, const GLuint *coords));
STUB(void,glMultiTexCoordP4uiv,(GLenum texture, GLenum type, const GLuint *coords));
STUB(void,glNormalP3ui,(GLenum type, GLuint coords));
STUB(void,glNormalP3uiv,(GLenum type, const GLuint *coords));
STUB(void,glColorP3ui,(GLenum type, GLuint color));
STUB(void,glColorP4ui,(GLenum type, GLuint color));
STUB(void,glColorP3uiv,(GLenum type, const GLuint *color));
STUB(void,glColorP4uiv,(GLenum type, const GLuint *color));
STUB(void,glSecondaryColorP3ui,(GLenum type, GLuint color));
STUB(void,glSecondaryColorP3uiv,(GLenum type, const GLuint *color));
STUB(void,glBindFragDataLocationIndexed,(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name));
STUB_INT(GLint,glGetFragDataIndex,(GLuint program, const GLchar *name));
//STUB(void,glGenSamplers,());
//STUB(void,glDeleteSamplers,());
//STUB(void,glIsSampler,());
//STUB(void,glBindSampler,());
//STUB(void,glSamplerParameteri,());
//STUB(void,glSamplerParameterf,());
//STUB(void,glSamplerParameteriv,());
//STUB(void,glSamplerParameterfv,());
//STUB(void,glSamplerParameterIiv,());
//STUB(void,glSamplerParameterIuiv,());
//STUB(void,glGetSamplerParameteriv,());
//STUB(void,glGetSamplerParameterfv,());
//STUB(void,glGetSamplerParameterIiv,());
//STUB(void,glGetSamplerParameterIuiv,());
//STUB(void,glQueryCounter,());
//STUB(void,glGetQueryObjecti64v,());
//STUB(void,glGetQueryObjectui64v,());
//STUB(void,glVertexAttribDivisor,());
STUB(void,glVertexAttribP1ui,(GLuint index, GLenum type, GLboolean normalized, GLuint value));
STUB(void,glVertexAttribP2ui,(GLuint index, GLenum type, GLboolean normalized, GLuint value));
STUB(void,glVertexAttribP3ui,(GLuint index, GLenum type, GLboolean normalized, GLuint value));
STUB(void,glVertexAttribP4ui,(GLuint index, GLenum type, GLboolean normalized, GLuint value));
STUB(void,glVertexAttribP1uiv,(GLuint index, GLenum type, GLboolean normalized, const GLuint *value));
STUB(void,glVertexAttribP2uiv,(GLuint index, GLenum type, GLboolean normalized, const GLuint *value));
STUB(void,glVertexAttribP3uiv,(GLuint index, GLenum type, GLboolean normalized, const GLuint *value));
STUB(void,glVertexAttribP4uiv,(GLuint index, GLenum type, GLboolean normalized, const GLuint *value));

// ================================ GL40 ================================

STUB(void,glBlendEquationi,(GLuint buf, GLenum mode));
//STUB(void,glBlendEquationSeparatei,()));
STUB(void,glBlendFunci,(GLuint buf, GLenum src, GLenum dst));
//STUB(void,glBlendFuncSeparatei,()));
STUB(void,glDrawArraysIndirect,(GLenum mode, const void *indirect));
STUB(void,glDrawElementsIndirect,(GLenum mode, GLenum type, const void *indirect));
STUB(void,glUniform1d,(GLint location, GLdouble x));
STUB(void,glUniform2d,(GLint location, GLdouble x, GLdouble y));
STUB(void,glUniform3d,(GLint location, GLdouble x, GLdouble y, GLdouble z));
STUB(void,glUniform4d,(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w));
STUB(void,glUniform1dv,(GLint location, GLsizei count, const GLdouble *value));
STUB(void,glUniform2dv,(GLint location, GLsizei count, const GLdouble *value));
STUB(void,glUniform3dv,(GLint location, GLsizei count, const GLdouble *value));
STUB(void,glUniform4dv,(GLint location, GLsizei count, const GLdouble *value));
STUB(void,glUniformMatrix2dv,(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glUniformMatrix3dv,(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glUniformMatrix4dv,(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glUniformMatrix2x3dv,(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glUniformMatrix2x4dv,(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glUniformMatrix3x2dv,(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glUniformMatrix3x4dv,(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glUniformMatrix4x2dv,(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glUniformMatrix4x3dv,(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glGetUniformdv,(GLuint program, GLint location, GLdouble *params));
STUB(void,glMinSampleShading,(GLfloat value));
STUB_INT(GLint,glGetSubroutineUniformLocation,(GLuint program, GLenum shadertype, const GLchar *name));
STUB_INT(GLuint,glGetSubroutineIndex,(GLuint program, GLenum shadertype, const GLchar *name));
STUB(void,glGetActiveSubroutineUniformiv,(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values));
STUB(void,glGetActiveSubroutineUniformName,(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name));
STUB(void,glGetActiveSubroutineName,(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name));
STUB(void,glUniformSubroutinesuiv,(GLenum shadertype, GLsizei count, const GLuint *indices));
STUB(void,glGetUniformSubroutineuiv,(GLenum shadertype, GLint location, GLuint *params));
STUB(void,glGetProgramStageiv,(GLuint program, GLenum shadertype, GLenum pname, GLint *values));
STUB(void,glPatchParameteri,(GLenum pname, GLint value));
STUB(void,glPatchParameterfv,(GLenum pname, const GLfloat *values));
STUB(void,glBindTransformFeedback,(GLenum target, GLuint id));
STUB(void,glDeleteTransformFeedbacks,(GLsizei n, const GLuint *ids));
STUB(void,glGenTransformFeedbacks,(GLsizei n, GLuint *ids));
STUB_INT(GLboolean,glIsTransformFeedback,(GLuint id));
STUB(void,glPauseTransformFeedback,(void));
STUB(void,glResumeTransformFeedback,(void));
STUB(void,glDrawTransformFeedback,(GLenum mode, GLuint id));
STUB(void,glDrawTransformFeedbackStream,(GLenum mode, GLuint id, GLuint stream));
STUB(void,glBeginQueryIndexed,(GLenum target, GLuint index, GLuint id));
STUB(void,glEndQueryIndexed,(GLenum target, GLuint index));
STUB(void,glGetQueryIndexediv,(GLenum target, GLuint index, GLenum pname, GLint *params));

// ================================ GL41 ================================

//STUB(void,glReleaseShaderCompiler,()));
//STUB(void,glShaderBinary,()));
//STUB(void,glGetShaderPrecisionFormat,()));
//STUB(void,glDepthRangef,()));
//STUB(void,glClearDepthf,()));
//STUB(void,glGetProgramBinary,()));
//STUB(void,glProgramBinary,()));
STUB(void,glProgramParameteri,(GLuint program, GLenum pname, GLint value));
STUB(void,glUseProgramStages,(GLuint pipeline, GLbitfield stages, GLuint program));
STUB(void,glActiveShaderProgram,(GLuint pipeline, GLuint program));
STUB_INT(GLuint,glCreateShaderProgramv,(GLenum type, GLsizei count, const GLchar *const*strings));
STUB(void,glBindProgramPipeline,(GLuint pipeline));
STUB(void,glDeleteProgramPipelines,(GLsizei n, const GLuint *pipelines));
STUB(void,glGenProgramPipelines,(GLsizei n, GLuint *pipelines));
STUB_INT(GLboolean,glIsProgramPipeline,(GLuint pipeline));
STUB(void,glGetProgramPipelineiv,(GLuint pipeline, GLenum pname, GLint *params));
//STUB(void,glProgramUniform1i,()));
//STUB(void,glProgramUniform1iv,()));
//STUB(void,glProgramUniform1f,()));
//STUB(void,glProgramUniform1fv,()));
STUB(void,glProgramUniform1d,(GLuint program, GLint location, GLdouble v0));
STUB(void,glProgramUniform1dv,(GLuint program, GLint location, GLsizei count, const GLdouble *value));
STUB(void,glProgramUniform1ui,(GLuint program, GLint location, GLuint v0));
STUB(void,glProgramUniform1uiv,(GLuint program, GLint location, GLsizei count, const GLuint *value));
//STUB(void,glProgramUniform2i,()));
//STUB(void,glProgramUniform2iv,()));
//STUB(void,glProgramUniform2f,()));
//STUB(void,glProgramUniform2fv,()));
STUB(void,glProgramUniform2d,(GLuint program, GLint location, GLdouble v0, GLdouble v1));
STUB(void,glProgramUniform2dv,(GLuint program, GLint location, GLsizei count, const GLdouble *value));
STUB(void,glProgramUniform2ui,(GLuint program, GLint location, GLuint v0, GLuint v1));
STUB(void,glProgramUniform2uiv,(GLuint program, GLint location, GLsizei count, const GLuint *value));
//STUB(void,glProgramUniform3i,()));
//STUB(void,glProgramUniform3iv,()));
//STUB(void,glProgramUniform3f,()));
//STUB(void,glProgramUniform3fv,()));
STUB(void,glProgramUniform3d,(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2));
STUB(void,glProgramUniform3dv,(GLuint program, GLint location, GLsizei count, const GLdouble *value));
STUB(void,glProgramUniform3ui,(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2));
STUB(void,glProgramUniform3uiv,(GLuint program, GLint location, GLsizei count, const GLuint *value));
//STUB(void,glProgramUniform4i,()));
//STUB(void,glProgramUniform4iv,()));
//STUB(void,glProgramUniform4f,()));
//STUB(void,glProgramUniform4fv,()));
STUB(void,glProgramUniform4d,(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3));
STUB(void,glProgramUniform4dv,(GLuint program, GLint location, GLsizei count, const GLdouble *value));
STUB(void,glProgramUniform4ui,(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3));
STUB(void,glProgramUniform4uiv,(GLuint program, GLint location, GLsizei count, const GLuint *value));
//STUB(void,glProgramUniformMatrix2fv,()));
//STUB(void,glProgramUniformMatrix3fv,()));
//STUB(void,glProgramUniformMatrix4fv,()));
STUB(void,glProgramUniformMatrix2dv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glProgramUniformMatrix3dv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glProgramUniformMatrix4dv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glProgramUniformMatrix2x3fv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value));
STUB(void,glProgramUniformMatrix3x2fv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value));
STUB(void,glProgramUniformMatrix2x4fv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value));
STUB(void,glProgramUniformMatrix4x2fv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value));
STUB(void,glProgramUniformMatrix3x4fv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value));
STUB(void,glProgramUniformMatrix4x3fv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value));
STUB(void,glProgramUniformMatrix2x3dv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glProgramUniformMatrix3x2dv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glProgramUniformMatrix2x4dv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glProgramUniformMatrix4x2dv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glProgramUniformMatrix3x4dv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glProgramUniformMatrix4x3dv,(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value));
STUB(void,glValidateProgramPipeline,(GLuint pipeline));
STUB(void,glGetProgramPipelineInfoLog,(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog));
STUB(void,glVertexAttribL1d,(GLuint index, GLdouble x));
STUB(void,glVertexAttribL2d,(GLuint index, GLdouble x, GLdouble y));
STUB(void,glVertexAttribL3d,(GLuint index, GLdouble x, GLdouble y, GLdouble z));
STUB(void,glVertexAttribL4d,(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w));
STUB(void,glVertexAttribL1dv,(GLuint index, const GLdouble *v));
STUB(void,glVertexAttribL2dv,(GLuint index, const GLdouble *v));
STUB(void,glVertexAttribL3dv,(GLuint index, const GLdouble *v));
STUB(void,glVertexAttribL4dv,(GLuint index, const GLdouble *v));
STUB(void,glVertexAttribLPointer,(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer));
STUB(void,glGetVertexAttribLdv,(GLuint index, GLenum pname, GLdouble *params));
STUB(void,glViewportArrayv,(GLuint first, GLsizei count, const GLfloat *v));
STUB(void,glViewportIndexedf,(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h));
STUB(void,glViewportIndexedfv,(GLuint index, const GLfloat *v));
STUB(void,glScissorArrayv,(GLuint first, GLsizei count, const GLint *v));
STUB(void,glScissorIndexed,(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height));
STUB(void,glScissorIndexedv,(GLuint index, const GLint *v));
STUB(void,glDepthRangeArrayv,(GLuint first, GLsizei count, const GLdouble *v));
STUB(void,glDepthRangeIndexed,(GLuint index, GLdouble n, GLdouble f));
STUB(void,glGetFloati_v,(GLenum target, GLuint index, GLfloat *data));
STUB(void,glGetDoublei_v,(GLenum target, GLuint index, GLdouble *data));

// ================================ GL42 ================================

STUB(void,glDrawArraysInstancedBaseInstance,(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance));
STUB(void,glDrawElementsInstancedBaseInstance,(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance));
STUB(void,glDrawElementsInstancedBaseVertexBaseInstance,(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance));
STUB(void,glGetInternalformativ,(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params));
STUB(void,glGetActiveAtomicCounterBufferiv,(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params));
STUB(void,glBindImageTexture,(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format));
//STUB(void,glMemoryBarrier,(GLbitfield barriers));
//STUB(void,glTexStorage1D,()));
//STUB(void,glTexStorage2D,()));
//STUB(void,glTexStorage3D,()));
STUB(void,glDrawTransformFeedbackInstanced,(GLenum mode, GLuint id, GLsizei instancecount));
STUB(void,glDrawTransformFeedbackStreamInstanced,(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount));

// ================================ GL43 ================================

STUB(void,glClearBufferData,(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data));
STUB(void,glClearBufferSubData,(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data));
STUB(void,glDispatchCompute,(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z));
STUB(void,glDispatchComputeIndirect,(GLintptr indirect));
//STUB(void,glCopyImageSubData,(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth));
STUB(void,glFramebufferParameteri,(GLenum target, GLenum pname, GLint param));
STUB(void,glGetFramebufferParameteriv,(GLenum target, GLenum pname, GLint *params));
STUB(void,glGetInternalformati64v,(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params));
STUB(void,glInvalidateTexSubImage,(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth));
STUB(void,glInvalidateTexImage,(GLuint texture, GLint level));
STUB(void,glInvalidateBufferSubData,(GLuint buffer, GLintptr offset, GLsizeiptr length));
STUB(void,glInvalidateBufferData,(GLuint buffer));
STUB(void,glInvalidateFramebuffer,(GLenum target, GLsizei numAttachments, const GLenum *attachments));
STUB(void,glInvalidateSubFramebuffer,(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height));
STUB(void,glMultiDrawArraysIndirect,(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride));
STUB(void,glMultiDrawElementsIndirect,(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride));
STUB(void,glGetProgramInterfaceiv,(GLuint program, GLenum programInterface, GLenum pname, GLint *params));
STUB_INT(GLuint,glGetProgramResourceIndex,(GLuint program, GLenum programInterface, const GLchar *name));
STUB(void,glGetProgramResourceName,(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name));
STUB(void,glGetProgramResourceiv,(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params));
STUB_INT(GLint,glGetProgramResourceLocation,(GLuint program, GLenum programInterface, const GLchar *name));
STUB_INT(GLint,glGetProgramResourceLocationIndex,(GLuint program, GLenum programInterface, const GLchar *name));
STUB(void,glShaderStorageBlockBinding,(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding));
STUB(void,glTexBufferRange,(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size));
STUB(void,glTexStorage2DMultisample,(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations));
STUB(void,glTexStorage3DMultisample,(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations));
STUB(void,glTextureView,(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers));
STUB(void,glBindVertexBuffer,(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride));
STUB(void,glVertexAttribFormat,(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset));
STUB(void,glVertexAttribIFormat,(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset));
STUB(void,glVertexAttribLFormat,(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset));
STUB(void,glVertexAttribBinding,(GLuint attribindex, GLuint bindingindex));
STUB(void,glVertexBindingDivisor,(GLuint bindingindex, GLuint divisor));
STUB(void,glDebugMessageControl,(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled));
STUB(void,glDebugMessageInsert,(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf));
STUB(void,glDebugMessageCallback,(GLDEBUGPROC callback, const void *userParam));
STUB_INT(GLuint,glGetDebugMessageLog,(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog));
STUB(void,glPushDebugGroup,(GLenum source, GLuint id, GLsizei length, const GLchar *message));
STUB(void,glPopDebugGroup,(void));
STUB(void,glObjectLabel,(GLenum identifier, GLuint name, GLsizei length, const GLchar *label));
STUB(void,glGetObjectLabel,(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label));
STUB(void,glObjectPtrLabel,(const void *ptr, GLsizei length, const GLchar *label));
STUB(void,glGetObjectPtrLabel,(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label));

// ================================ GL44 ================================

//STUB(void,glBufferStorage,()));
STUB(void,glClearTexImage,(GLuint texture, GLint level, GLenum format, GLenum type, const void *data));
STUB(void,glClearTexSubImage,(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data));
STUB(void,glBindBuffersBase,(GLenum target, GLuint first, GLsizei count, const GLuint *buffers));
STUB(void,glBindBuffersRange,(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes));
STUB(void,glBindTextures,(GLuint first, GLsizei count, const GLuint *textures));
STUB(void,glBindSamplers,(GLuint first, GLsizei count, const GLuint *samplers));
STUB(void,glBindImageTextures,(GLuint first, GLsizei count, const GLuint *textures));
STUB(void,glBindVertexBuffers,(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides));

// ================================ GL45 ================================
/*
STUB(void,glClipControl,(GLenum origin, GLenum depth));
STUB(void,glCreateTransformFeedbacks,(GLsizei n, GLuint *ids));
STUB(void,glTransformFeedbackBufferBase,(GLuint xfb, GLuint index, GLuint buffer));
STUB(void,glTransformFeedbackBufferRange,(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size));
STUB(void,glGetTransformFeedbackiv,(GLuint xfb, GLenum pname, GLint *param));
STUB(void,glGetTransformFeedbacki_v,(GLuint xfb, GLenum pname, GLuint index, GLint *param));
STUB(void,glGetTransformFeedbacki64_v,(GLuint xfb, GLenum pname, GLuint index, GLint64 *param));
STUB(void,glCreateBuffers,(GLsizei n, GLuint *buffers));
STUB(void,glNamedBufferStorage,(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags));
//STUB(void,glNamedBufferData,()));
//STUB(void,glNamedBufferSubData,()));
STUB(void,glCopyNamedBufferSubData,(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size));
STUB(void,glClearNamedBufferData,(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data));
STUB(void,glClearNamedBufferSubData,(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data));
//STUB(void *APIENTRY_GL4ES gl4es_glMapNamedBuffer,()));
STUB(void,glMapNamedBufferRange,(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access));
//GLboolean,glUnmapNamedBuffer,()));
STUB(void,glFlushMappedNamedBufferRange,(GLuint buffer, GLintptr offset, GLsizeiptr length));
//STUB(void,glGetNamedBufferParameteriv,()));
STUB(void,glGetNamedBufferParameteri64v,(GLuint buffer, GLenum pname, GLint64 *params));
//STUB(void,glGetNamedBufferPointerv,()));
//STUB(void,glGetNamedBufferSubData,()));
STUB(void,glCreateFramebuffers,(GLsizei n, GLuint *framebuffers));
STUB(void,glNamedFramebufferRenderbuffer,(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer));
STUB(void,glNamedFramebufferParameteri,(GLuint framebuffer, GLenum pname, GLint param));
STUB(void,glNamedFramebufferTexture,(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level));
STUB(void,glNamedFramebufferTextureLayer,(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer));
STUB(void,glNamedFramebufferDrawBuffer,(GLuint framebuffer, GLenum buf));
//STUB(void,glNamedFramebufferDrawBuffers,()));
STUB(void,glNamedFramebufferReadBuffer,(GLuint framebuffer, GLenum src));
STUB(void,glInvalidateNamedFramebufferData,(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments));
STUB(void,glInvalidateNamedFramebufferSubData,(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height));
//STUB(void,glClearNamedFramebufferiv,()));
//STUB(void,glClearNamedFramebufferuiv,()));
//STUB(void,glClearNamedFramebufferfv,()));
//STUB(void,glClearNamedFramebufferfi,()));
STUB(void,glBlitNamedFramebuffer,(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter));
STUB(GLenum,glCheckNamedFramebufferStatus,(GLuint framebuffer, GLenum target));
STUB(void,glGetNamedFramebufferParameteriv,(GLuint framebuffer, GLenum pname, GLint *param));
STUB(void,glGetNamedFramebufferAttachmentParameteriv,(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params));
STUB(void,glCreateRenderbuffers,(GLsizei n, GLuint *renderbuffers));
STUB(void,glNamedRenderbufferStorage,(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height));
STUB(void,glNamedRenderbufferStorageMultisample,(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height));
STUB(void,glGetNamedRenderbufferParameteriv,(GLuint renderbuffer, GLenum pname, GLint *params));
STUB(void,glCreateTextures,(GLenum target, GLsizei n, GLuint *textures));
STUB(void,glTextureBuffer,(GLuint texture, GLenum internalformat, GLuint buffer));
STUB(void,glTextureBufferRange,(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size));
STUB(void,glTextureStorage1D,(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width));
STUB(void,glTextureStorage2D,(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height));
STUB(void,glTextureStorage3D,(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth));
STUB(void,glTextureStorage2DMultisample,(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations));
STUB(void,glTextureStorage3DMultisample,(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations));
//STUB(void,glTextureSubImage1D,());
//STUB(void,glTextureSubImage2D,());
//STUB(void,glTextureSubImage3D,());
//STUB(void,glCompressedTextureSubImage1D,());
//STUB(void,glCompressedTextureSubImage2D,());
//STUB(void,glCompressedTextureSubImage3D,());
//STUB(void,glCopyTextureSubImage1D,());
//STUB(void,glCopyTextureSubImage2D,());
//STUB(void,glCopyTextureSubImage3D,());
//STUB(void,glTextureParameterf,());
//STUB(void,glTextureParameterfv,());
//STUB(void,glTextureParameteri,());
STUB(void,glTextureParameterIiv,(GLuint texture, GLenum pname, const GLint *params));
STUB(void,glTextureParameterIuiv,(GLuint texture, GLenum pname, const GLuint *params));
//STUB(void,glTextureParameteriv,());
STUB(void,glGenerateTextureMipmap,(GLuint texture));
STUB(void,glBindTextureUnit,(GLuint unit, GLuint texture));
//STUB(void,glGetTextureImage,());
//STUB(void,glGetCompressedTextureImage,());
//STUB(void,glGetTextureLevelParameterfv,());
//STUB(void,glGetTextureLevelParameteriv,());
//STUB(void,glGetTextureParameterfv,());
STUB(void,glGetTextureParameterIiv,(GLuint texture, GLenum pname, GLint *params));
STUB(void,glGetTextureParameterIuiv,(GLuint texture, GLenum pname, GLuint *params));
//STUB(void,glGetTextureParameteriv,());
STUB(void,glCreateVertexArrays,(GLsizei n, GLuint *arrays));
//STUB(void,glDisableVertexArrayAttrib,()));
//STUB(void,glEnableVertexArrayAttrib,()));
STUB(void,glVertexArrayElementBuffer,(GLuint vaobj, GLuint buffer));
STUB(void,glVertexArrayVertexBuffer,(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride));
STUB(void,glVertexArrayVertexBuffers,(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides));
STUB(void,glVertexArrayAttribBinding,(GLuint vaobj, GLuint attribindex, GLuint bindingindex));
STUB(void,glVertexArrayAttribFormat,(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset));
STUB(void,glVertexArrayAttribIFormat,(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset));
STUB(void,glVertexArrayAttribLFormat,(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset));
STUB(void,glVertexArrayBindingDivisor,(GLuint vaobj, GLuint bindingindex, GLuint divisor));
STUB(void,glGetVertexArrayiv,(GLuint vaobj, GLenum pname, GLint *param));
STUB(void,glGetVertexArrayIndexediv,(GLuint vaobj, GLuint index, GLenum pname, GLint *param));
STUB(void,glGetVertexArrayIndexed64iv,(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param));
STUB(void,glCreateSamplers,(GLsizei n, GLuint *samplers));
STUB(void,glCreateProgramPipelines,(GLsizei n, GLuint *pipelines));
STUB(void,glCreateQueries,(GLenum target, GLsizei n, GLuint *ids));
STUB(void,glGetQueryBufferObjecti64v,(GLuint id, GLuint buffer, GLenum pname, GLintptr offset));
STUB(void,glGetQueryBufferObjectiv,(GLuint id, GLuint buffer, GLenum pname, GLintptr offset));
STUB(void,glGetQueryBufferObjectui64v,(GLuint id, GLuint buffer, GLenum pname, GLintptr offset));
STUB(void,glGetQueryBufferObjectuiv,(GLuint id, GLuint buffer, GLenum pname, GLintptr offset));
STUB(void,glMemoryBarrierByRegion,(GLbitfield barriers));
STUB(void,glGetTextureSubImage,(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels));
STUB(void,glGetCompressedTextureSubImage,(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels));
STUB(GLenum,glGetGraphicsResetStatus,(void));
STUB(void,glGetnCompressedTexImage,(GLenum target, GLint lod, GLsizei bufSize, void *pixels));
STUB(void,glGetnTexImage,(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels));
STUB(void,glGetnUniformdv,(GLuint program, GLint location, GLsizei bufSize, GLdouble *params));
STUB(void,glGetnUniformfv,(GLuint program, GLint location, GLsizei bufSize, GLfloat *params));
STUB(void,glGetnUniformiv,(GLuint program, GLint location, GLsizei bufSize, GLint *params));
STUB(void,glGetnUniformuiv,(GLuint program, GLint location, GLsizei bufSize, GLuint *params));
STUB(void,glReadnPixels,(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data));
STUB(void,glGetnMapdv,(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v));
STUB(void,glGetnMapfv,(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v));
STUB(void,glGetnMapiv,(GLenum target, GLenum query, GLsizei bufSize, GLint *v));
STUB(void,glGetnPixelMapfv,(GLenum map, GLsizei bufSize, GLfloat *values));
STUB(void,glGetnPixelMapuiv,(GLenum map, GLsizei bufSize, GLuint *values));
STUB(void,glGetnPixelMapusv,(GLenum map, GLsizei bufSize, GLushort *values));
STUB(void,glGetnPolygonStipple,(GLsizei bufSize, GLubyte *pattern));
STUB(void,glGetnColorTable,(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table));
STUB(void,glGetnConvolutionFilter,(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image));
STUB(void,glGetnSeparableFilter,(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span));
STUB(void,glGetnHistogram,(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values));
STUB(void,glGetnMinmax,(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values));
STUB(void,glTextureBarrier,(void));

// ================================ GL46 ================================

STUB(void,glSpecializeShader,(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue));
STUB(void,glMultiDrawArraysIndirectCount,(GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride));
STUB(void,glMultiDrawElementsIndirectCount,(GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride));
STUB(void,glPolygonOffsetClamp,(GLfloat factor, GLfloat units, GLfloat clamp));*/
#undef STUB
