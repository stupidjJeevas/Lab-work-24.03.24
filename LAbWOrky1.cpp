#include <iostream>
#include <set>

int main() {
    int N;
    std::cin >> N;

    std::set<int> nums;
    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        nums.insert(num);
    }

    std::cout << nums.size() << std::endl;

    return 0;
}