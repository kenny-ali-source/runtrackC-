#include <iostream>

int main() {
    void *tab[] = { (void*)2019, (void*)"La Plateforme", (void*)3.14, (void*)"Étudiants" };
    int length = sizeof(tab) / sizeof(tab[0]);

    std::cout << "Adresse et valeur de chaque élément du tableau :\n";
    for (int i = 0; i < length; ++i) {
        std::cout << "Adresse : " << &tab[i] << ", Valeur : ";
        if (i == 0) {
            int* ptrInt = static_cast<int*>(tab[i]);
            std::cout << *ptrInt;
        } else if (i == 2) {
            double* ptrDouble = static_cast<double*>(tab[i]);
            std::cout << *ptrDouble;
        } else {
            const char** ptrChar = static_cast<const char**>(tab[i]);
            std::cout << *ptrChar;
        }
        std::cout << std::endl;
    }

    return 0;
}
