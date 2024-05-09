#include <iostream>

int main() {
    int N;
    int M; 

    std::cout << "Entrez le premier nombre : ";
    std::cin >> N;
    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> M;

    int result = N * M;

    std::cout << "La somme des nombres est : " << result;

    return 0;
}
