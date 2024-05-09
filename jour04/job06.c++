#include <iostream>

int main() {
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    char caractere[] = "La Plateforme";

    std::cout << "Adresse de entier : " << &entier << " Valeur : " << entier << std::endl;
    std::cout << "Adresse de flottant : " << &flottant << " Valeur : " << flottant << std::endl;
    std::cout << "Adresse de reel : " << &reel << " Valeur : " << reel << std::endl;
    std::cout << "Adresse de caractere : " << (void *)&caractere << " Valeur : " << caractere << std::endl;

    return 0;
}
