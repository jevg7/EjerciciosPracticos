#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the size of the vectors: ";
    std::cin >> size;

    std::vector<int> vector1(size);
    std::vector<int> vector2(size);
    std::vector<int> sumVector(size);

    std::cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < size; i++) {
        std::cin >> vector1[i];
    }

    std::cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < size; i++) {
        std::cin >> vector2[i];
    }

    for (int i = 0; i < size; i++) {
        sumVector[i] = vector1[i] + vector2[i];
    }

    std::cout << "The sum of the vectors is: ";
    for (int i = 0; i < size; i++) {
        std::cout << sumVector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}