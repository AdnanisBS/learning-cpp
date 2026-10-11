#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> miracle_sort(std::vector<int> a) {
    std::sort(a.begin(), a.end());
    return a;
}

int main() {
    std::vector<int> values = {5, 1, 3, 2};
    auto sorted = miracle_sort(values);

    for (int value : sorted) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
