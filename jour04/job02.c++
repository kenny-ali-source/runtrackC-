#include <iostream>

int main() {
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    std::cout << "La valeur de num1 après échange : " << num1 << std::endl;
    std::cout << "La valeur de num2 après échange : " << num2 << std::endl;
    return 0;
}
