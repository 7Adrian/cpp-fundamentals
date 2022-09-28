#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    std::cout << vec.size() << ' ' << vec.capacity() << '\n';
    vec.resize(10, 5);
    std::cout << vec.size() << ' ' << vec.capacity() << '\n';
    vec.reserve(20);
    std::cout << vec.size() << ' ' << vec.capacity() << '\n';
    vec.shrink_to_fit();
    std::cout << vec.size() << ' ' << vec.capacity() << '\n';
    return 0;
}
