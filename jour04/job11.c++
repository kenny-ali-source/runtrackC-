#include <iostream>
#include <string>

int main() {
    std::string fruits[] = {"Pomme", "Banane", "Orange", "Fraise", "Kiwi"};
    int length = sizeof(fruits) / sizeof(fruits[0]);

    std::cout << "Fruits disponibles :\n";
    for (int i = 0; i < length; ++i) {
        std::cout << i + 1 << ". " << fruits[i] << std::endl;
    }

    int favCount;
    std::cout << "Combien de fruits voulez-vous sélectionner comme favoris ? : ";
    std::cin >> favCount;
    std::string *favoris = new std::string[favCount];

    for (int i = 0; i < favCount; ++i) {
        int choix;
        std::cout << "Choix " << i + 1 << " : ";
        std::cin >> choix;
        if (choix >= 1 && choix <= length) {
            favoris[i] = fruits[choix - 1];
        } else {
            std::cout << "Choix invalide. Essayez encore." << std::endl;
            --i;
        }
    }

    std::cout << "Vos fruits favoris sont :\n";
    for (int i = 0; i < favCount; ++i) {
        std::cout << favoris[i] << std::endl;
    }

    delete[] favoris;

    return 0;
}
