#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i * i;
    }

    std::cout << "The sum of the squares is: " << sum << std::endl;

    return 0;
}