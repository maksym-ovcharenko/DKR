#include "encryption.h"

std::string Encryption::encrypt(const std::string& data) {
    std::string encrypted = data;
    for (char& c : encrypted) {
        c = c + 1; // Simple Caesar cipher 
    }
    return encrypted;
}

std::string Encryption::decrypt(const std::string& data) {
    std::string decrypted = data;
    for (char& c : decrypted) {
        c = c - 1; // Simple Caesar cipher 
    }
    return decrypted;
}
