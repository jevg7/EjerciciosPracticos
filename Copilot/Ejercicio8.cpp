#include <iostream>
#include <vector>

int main() {
    // Get the length of the vectors from the user
    int length;
    std::cout << "Enter the length of the vectors: ";
    std::cin >> length;

    // Create two vectors of the same length
    std::vector<int> vector1(length);
    std::vector<int> vector2(length);

    // Get the elements of the first vector from the user
    std::cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < length; i++) {
        std::cin >> vector1[i];
    }

    // Get the elements of the second vector from the user
    std::cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < length; i++) {
        std::cin >> vector2[i];
    }

    // Calculate the dot product
    int dotProduct = 0;
    for (int i = 0; i < length; i++) {
        dotProduct += vector1[i] * vector2[i];
    }

    // Display the result
    std::cout << "The dot product is: " << dotProduct << std::endl;

    return 0;
}