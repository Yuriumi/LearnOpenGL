#pragma once

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
	// 程序ID
	unsigned int ID;
	// 构造器
	Shader(const char* vertexPath, const char* fragmentPath);
	// 启用函数
	void use();
	// 工具函数
	void setBool(const std::string& name,bool value)const;
	void setInt(const std::string& name, int value)const;;
	void setFloat(const std::string& name, float value)const;;
};

