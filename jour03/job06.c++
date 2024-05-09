#include <iostream>

int main() {
    int T[10];
    int count = 0;
    std::cout << "Entrez 10 entiers : ";
    for (int i = 0; i < 10; ++i) {
        std::cin >> T[i];
        if (T[i] >= 5) {
            count++;
        }
    }
    std::cout << "Le nombre d'entiers supérieurs ou égaux à 5 est : " << count << std::endl;
    return 0;
}
