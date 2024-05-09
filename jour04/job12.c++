#include <iostream>
#include <string>
#include <vector>

struct Staff {
    std::string nom;
    std::string prenom;
};

int main() {
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};

    std::cout << "Prenoms du staff :\n";
    std::cout << alicia.prenom << std::endl;
    std::cout << pierre.prenom << std::endl;

    int etudiantsCount;
    std::cout << "Combien d'étudiants voulez-vous ajouter ? : ";
    std::cin >> etudiantsCount;
    std::vector<Staff> etudiants(etudiantsCount);

    for (int i = 0; i < etudiantsCount; ++i) {
        std::cout << "Nom de l'étudiant " << i + 1 << " : ";
        std::cin >> etudiants[i].nom;
        std::cout << "Prenom de l'étudiant " << i + 1 << " : ";
        std::cin >> etudiants[i].prenom;
    }

    std::cout << "Prenoms des etudiants :\n";
    for (const auto& etudiant : etudiants) {
        std::cout << etudiant.prenom << std::endl;
    }

    return 0;
}
