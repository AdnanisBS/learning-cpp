#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

bool is_sorted(const std::vector<int>& arr) {
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

std::vector<int> bogo_sort(std::vector<int> arr) {
    std::random_device rd;
    std::mt19937 gen(rd());

    while (!is_sorted(arr)) {
        std::shuffle(arr.begin(), arr.end(), gen);
    }

    return arr;
}

int main() {
    std::vector<int> nums = {3, 1, 2, 67, 69};
    std::vector<int> sorted = bogo_sort(nums);

    for (int value : sorted) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
