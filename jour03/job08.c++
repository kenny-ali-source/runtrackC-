#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Entrez une chaîne de caractère : ";
    std::cin >> input;
    char tab[input.size() + 1];
    std::strcpy(tab, input.c_str());
    tab[input.size()] = '\0';
    return 0;
}
