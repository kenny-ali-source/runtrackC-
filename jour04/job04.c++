#include <iostream>

int main() {
    int num1 = 10, num2 = 20, num3 = 30;
    int *ptr1 = &num1, *ptr2 = &num2, *ptr3 = &num3;

    std::cout << "Valeur de num1 : " << *ptr1 << std::endl;
    std::cout << "Valeur de num2 : " << *ptr2 << std::endl;
    std::cout << "Valeur de num3 : " << *ptr3 << std::endl;

    *ptr1 = 100;
    *ptr2 = 200;
    *ptr3 = 300;

    std::cout << "Nouvelle valeur de num1 : " << *ptr1 << std::endl;
    std::cout << "Nouvelle valeur de num2 : " << *ptr2 << std::endl;
    std::cout << "Nouvelle valeur de num3 : " << *ptr3 << std::endl;

    return 0;
}
