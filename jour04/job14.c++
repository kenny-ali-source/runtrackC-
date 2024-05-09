#include <iostream>

int main() {
    int x = 12;
    int& refX = x;
    refX = 24;
    std::cout << "La nouvelle valeur de x est : " << x << std::endl;
    return 0;
}
