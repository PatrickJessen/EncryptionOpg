#include "Encrypter.h"
#include <iostream>

int main()
{
	std::string encryptedstring = Encrypter::EncryptString("Hello");
	std::string decryptedstring = Encrypter::DecryptString(encryptedstring);
	std::cout << encryptedstring << "\n";
	std::cout << decryptedstring << "\n";
	int f;
	std::cin >> f;
	return 0;
}