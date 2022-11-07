#pragma once
#include <string>

class Encrypter
{
public:
	static std::string EncryptString(const std::string& str);
	static std::string DecryptString(const std::string& str);
};