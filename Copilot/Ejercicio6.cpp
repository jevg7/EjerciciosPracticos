#include <iostream>

int main() {
    int sum = 0;

    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    std::cout << "Sum of even numbers between 100 and 200: " << sum << std::endl;

    return 0;
}