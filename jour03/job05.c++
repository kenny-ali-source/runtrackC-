#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string input;
    std::cout << "Entrez une heure sous le format XXhXX : ";
    std::cin >> input;
    std::regex pattern("[0-9]{2}h[0-9]{2}");
    if (std::regex_match(input, pattern)) {
        std::cout << "Format valide." << std::endl;
    } else {
        std::cout << "Format invalide." << std::endl;
    }
    return 0;
}
