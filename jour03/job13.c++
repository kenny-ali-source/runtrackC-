#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr1 = {1, 3, 5, 7, 9};
    std::vector<int> arr2 = {2, 4, 6, 8, 10};
    std::vector<int> merged;
    merged.reserve(arr1.size() + arr2.size());
    std::merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), std::back_inserter(merged));
    for (int num : merged) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
