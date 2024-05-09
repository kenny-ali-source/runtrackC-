#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Note {
    std::string nom;
    std::string prenom;
    double valeur;
};

void ajouterNote(std::vector<Note>& listeNotes) {
    Note nouvelleNote;
    std::cout << "Entrez le nom : ";
    std::cin >> nouvelleNote.nom;
    std::cout << "Entrez le prénom : ";
    std::cin >> nouvelleNote.prenom;
    std::cout << "Entrez la valeur : ";
    std::cin >> nouvelleNote.valeur;
    listeNotes.push_back(nouvelleNote);
}

void afficherNotes(const std::vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        std::cout << "La liste de notes est vide." << std::endl;
        return;
    }
    std::cout << "Liste des notes :\n";
    std::cout << std::setw(15) << "Nom" << std::setw(15) << "Prénom" << std::setw(10) << "Valeur" << std::endl;
    for (const auto& note : listeNotes) {
        std::cout << std::setw(15) << note.nom << std::setw(15) << note.prenom << std::setw(10) << note.valeur << std::endl;
    }
}

void supprimerNote(std::vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        std::cout << "La liste de notes est vide." << std::endl;
        return;
    }
    std::string nom, prenom;
    std::cout << "Entrez le nom de l'étudiant : ";
    std::cin >> nom;
    std::cout << "Entrez le prénom de l'étudiant : ";
    std::cin >> prenom;
    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            it = listeNotes.erase(it);
            std::cout << "Note supprimée avec succès." << std::endl;
            return;
        }
    }
    std::cout << "Aucune note correspondante trouvée." << std::endl;
}

void afficherMoyenne(const std::vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        std::cout << "La liste de notes est vide." << std::endl;
        return;
    }
    double somme = 0.0;
    for (const auto& note : listeNotes) {
        somme += note.valeur;
    }
    double moyenne = somme / listeNotes.size();
    std::cout << "La moyenne des notes est : " << moyenne << std::endl;
}

int main() {
    std::vector<Note> listeNotes;
    int choix;

    do {
        std::cout << "\nMenu :\n";
        std::cout << "1. Ajouter une note\n";
        std::cout << "2. Afficher la liste des notes\n";
        std::cout << "3. Supprimer une note\n";
        std::cout << "4. Afficher la moyenne des notes\n";
        std::cout << "5. Quitter\n";
        std::cout << "Choix : ";
        std::cin >> choix;

        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                afficherMoyenne(listeNotes);
                break;
            case 5:
                std::cout << "Au revoir !" << std::endl;
                break;
            default:
                std::cout << "Choix invalide. Veuillez réessayer." << std::endl;
                break;
        }
    } while (choix != 5);

    return 0;
}
