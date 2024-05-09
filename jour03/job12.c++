#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int secretNumber = rand() % 101;
    int guess;
    int attempts = 10;

    std::cout << "Bienvenue dans le jeu Nombre mystère !\n";
    std::cout << "Vous devez deviner un nombre entre 0 et 100.\n";
    
    while (attempts > 0) {
        std::cout << "Il vous reste " << attempts << " essais. Entrez votre guess : ";
        std::cin >> guess;

        if (guess == secretNumber) {
            std::cout << "Félicitations ! Vous avez deviné le nombre mystère.\n";
            break;
        } else if (guess < secretNumber) {
            std::cout << "Trop petit.\n";
        } else {
            std::cout << "Trop grand.\n";
        }
        
        attempts--;
    }

    if (attempts == 0) {
        std::cout << "Désolé, vous avez utilisé tous vos essais. Le nombre mystère était : " << secretNumber << "\n";
    }

    return 0;
}
