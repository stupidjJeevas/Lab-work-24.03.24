#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> stringSet;
    char operation;
    std::string str;

    while (std::cin >> operation) {
        if (operation == '#') {
            break;
        }

        std::cin >> str;

        if (operation == '+') {
            stringSet.insert(str);
        }
        else if (operation == '-') {
            stringSet.erase(str);
        }
        else if (operation == '?') {
            if (stringSet.find(str) != stringSet.end()) {
                std::cout << "YES\n";
            }
            else {
                std::cout << "NO\n";
            }
        }
    }

    return 0;
}