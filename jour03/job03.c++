#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    if (str1 == str2) {
        std::cout << "0" << std::endl;
    } else {
        std::cout << "1" << std::endl;
    }
    return 0;
}
