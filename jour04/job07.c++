#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        std::cout << "Adresse de arr[" << i << "] : " << &arr[i] << " Valeur : " << arr[i] << std::endl;
    }

    return 0;
}
