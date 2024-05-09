#include <iostream>
#include <vector>
#include <string>

struct Destination {
    std::string nom;
    int tempsDeVol;
};

int main() {
    std::vector<Destination*> destinations;
    int choix = 1;

    while (choix == 1) {
        Destination* nouvelleDestination = new Destination();
        std::cout << "Entrez le nom de la destination : ";
        std::cin >> nouvelleDestination->nom;
        std::cout << "Entrez le temps de vol depuis Marseille : ";
        std::cin >> nouvelleDestination->tempsDeVol;
        destinations.push_back(nouvelleDestination);

        std::cout << "Voulez-vous ajouter une autre destination ? (1 pour oui, 0 pour non) : ";
        std::cin >> choix;
    }

    std::cout << "Destinations enregistrées :\n";
    for (const auto& destination : destinations) {
        std::cout << "Nom : " << destination->nom << ", Temps de vol : " << destination->tempsDeVol << std::endl;
    }

    // Modification des données de chaque destination
    for (auto& destination : destinations) {
        destination->tempsDeVol += 1;
    }

    std::cout << "Destinations après modification :\n";
    for (const auto& destination : destinations) {
        std::cout << "Nom : " << destination->nom << ", Temps de vol : " << destination->tempsDeVol << std::endl;
    }

    // Libération de la mémoire
    for (auto& destination : destinations) {
        delete destination;
    }
    destinations.clear();

    return 0;
}
