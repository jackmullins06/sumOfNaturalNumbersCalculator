#include <iostream>

int promptForInput() {
    int number;

    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number;

    return number;
}

int addNaturalNumbers(int number) {
    int total = 0;
    for(int i = 1; i <= number; ++i) {
        total += i;
    }

    return total;
}

int main() {
    std::cout << addNaturalNumbers(promptForInput()) << std::endl;

    return 0;
}