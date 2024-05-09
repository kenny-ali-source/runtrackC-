#include <iostream>
#include <string>

int main() {
    std::string string1, string2;
    std::cout << "Entrez une chaîne de caractère : ";
    std::cin >> string1;
    string2 = "Bonjour";
    std::cout << "Avant tri : " << string1 << ", " << string2 << std::endl;
    if (string1 > string2) {
        std::swap(string1, string2);
    }
    std::cout << "Après tri : " << string1 << ", " << string2 << std::endl;
    return 0;
}
