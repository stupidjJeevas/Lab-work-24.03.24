#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<int, std::vector<std::string>> students;

    int classNumber;
    std::string name;
    while (std::cin >> classNumber >> name) {
        students[classNumber].push_back(name);
    }

    for (int i = 9; i <= 11; i++) {
        for (const std::string& student : students[i]) {
            std::cout << i << " " << student << std::endl;
        }
    }

    return 0;
}
