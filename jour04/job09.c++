#include <iostream>

int main() {
    int size;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> size;

    int *arr = new int[size];

    std::cout << "Entrez les entiers :\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Contenu du tableau :\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}
