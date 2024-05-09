#include <iostream>
#include <string>

bool isIncluded(const std::string& str1, const std::string& str2) {
    return str2.find(str1) != std::string::npos;
}

int main() {
    std::string str1, str2;
    std::cout << "Entrez deux chaînes de caractères : ";
    std::cin >> str1 >> str2;
    if (isIncluded(str1, str2)) {
        std::cout << "La première chaîne est incluse dans la deuxième." << std::endl;
    } else {
        std::cout << "La première chaîne n'est pas incluse dans la deuxième." << std::endl;
    }
    return 0;
}
