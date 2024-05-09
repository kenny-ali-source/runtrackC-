#include <iostream>

int main() {
    int tableau[] = {1, 2, 3, 4, 5};

    std::cout << "Valeurs du tableau :\n";
    for (int& valeur : tableau) {
        std::cout << valeur << std::endl;
    }

    return 0;
}
