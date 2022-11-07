#include "Encrypter.h"

static std::string _alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ∆ÿ≈";
static std::string _encryptedAlphabet = "KLMNOPQRSTUVWXYZ∆ÿ≈ABCDEFGHIJ";

std::string Encrypter::EncryptString(const std::string& str)
{
    std::string temp = "";
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < _alphabet.size(); j++) {
            if (std::tolower(str[i]) == std::tolower(_alphabet[j])) {
                char ch = _encryptedAlphabet[j + 1];
                temp += ch;
            }
        }
    }
    return temp;
}

std::string Encrypter::DecryptString(const std::string& str)
{
    std::string temp = "";
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < _alphabet.size(); j++) {
            if (std::tolower(str[i]) == std::tolower(_encryptedAlphabet[j])) {
                char ch = _alphabet[j -1];
                temp += ch;
            }
        }
    }
    return temp;
}
