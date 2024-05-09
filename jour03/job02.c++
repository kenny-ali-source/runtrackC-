#include <iostream>
#include <string>

int main() {
    std::string message = "vive la plateforme !";
    std::string vowels = "aeiouAEIOU";
    for (char vowel : vowels) {
        message.erase(std::remove(message.begin(), message.end(), vowel), message.end());
    }
    std::cout << message << std::endl;
    return 0;
}
