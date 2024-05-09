#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string message = "vive la plateforme !";
    std::transform(message.begin(), message.end(), message.begin(), ::toupper);
    std::cout << message << std::endl;
    return 0;
}
