#include <iostream>

int maxValue(const int* arr, int length) {
    if (length == 0) {
        return -1;
    }
    int max = arr[0];
    for (int i = 1; i < length; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int tableau[] = {5, 2, 8, 10, 3};
    int length = sizeof(tableau) / sizeof(tableau[0]);
    int max = maxValue(tableau, length);
    if (max != -1) {
        std::cout << "La valeur maximale du tableau est : " << max << std::endl;
    } else {
        std::cout << "Le tableau est vide." << std::endl;
    }
    return 0;
}
