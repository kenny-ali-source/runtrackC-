#include <iostream>

int main() {
    int T[10];
    std::cout << "Entrez 10 entiers : ";
    for (int i = 0; i < 10; ++i) {
        std::cin >> T[i];
    }
    int maxIndex = 0;
    for (int i = 1; i < 10; ++i) {
        if (T[i] > T[maxIndex]) {
            maxIndex = i;
        }
    }
    std::cout << "L'indice du plus grand élément est : " << maxIndex << std::endl;
    return 0;
}
