#include <iostream>
#include <cstring>

int main() {
    char str[100];
    std::cout << "Entrez une chaîne de caractères : ";
    std::cin.getline(str, 100);

    char *begin = str;
    char *end = str + strlen(str) - 1;

    while (begin < end) {
        char temp = *begin;
        *begin = *end;
        *end = temp;

        ++begin;
        --end;
    }

    std::cout << "Chaîne inversée : " << str << std::endl;

    return 0;
}
