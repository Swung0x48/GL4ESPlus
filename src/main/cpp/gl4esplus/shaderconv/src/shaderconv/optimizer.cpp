#include "../../include/optimizer/optimizer.h"
#include "GlslConvert.h"



Optimizer::Optimizer()
	:instance(GlslConvert::Instance())
{
}

std::string Optimizer::Optimize(std::string vShaderSource, xShaderStage vShaderType, int vGLSLVersion)
{
	return instance.Optimize(std::move(vShaderSource), GlslConvert::ShaderStage(vShaderType), GlslConvert::API_OPENGL_COMPAT, GlslConvert::LanguageTarget::LANGUAGE_TARGET_GLSL, vGLSLVersion, {});
}

bool Optimizer::Failed() const noexcept
{
	return instance.Failed();
}

std::string Optimizer::GetLog()
{
	return instance.GetLog();
}
