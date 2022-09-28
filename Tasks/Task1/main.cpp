#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec{1, 2, 4, 5, 6};
    vec.erase(vec.begin());
    vec.push_back(5);
    vec.emplace(vec.begin(), 12);
    std::cout << vec.size() << " " << vec.max_size() << '\n';
    for (auto a : vec) {
        std::cout << a << ' ';
    }
    std::cout << '\n';
    vec.clear();
    std::cout << vec.size() << '\n';
    return 0;
}
