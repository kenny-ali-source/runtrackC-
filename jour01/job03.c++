#include <iostream>

int main() {
    int N;

   
    std::cout << "Entrez le nombre de fois que vous voulez afficher Hello World : ";
    std::cin >> N;

  
    while (N != 0) {
        std::cout << "Hello World" << std::endl;
        N--; 
    }

    return 0;
}
