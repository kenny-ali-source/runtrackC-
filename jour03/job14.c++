#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    return str == std::string(str.rbegin(), str.rend());
}

int main() {
    std::vector<std::string> tab = {"radar", "hello", "lvel", "stats", "world"};
    std::cout << "Palindromes dans le tableau :\n";
    for (const auto& word : tab) {
        if (isPalindrome(word)) {
            std::cout << word << std::endl;
        }
    }
    return 0;
}
