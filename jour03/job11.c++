#include <iostream>
#include <vector>

int sumOfEven(const std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        if (num % 2 == 0) {
            sum += num;
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "La somme des éléments pairs est : " << sumOfEven(arr) << std::endl;
    return 0;
}
