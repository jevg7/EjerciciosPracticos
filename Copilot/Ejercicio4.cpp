#include <iostream>

int main() {
    const int numStudents = 10;
    int grades[numStudents];
    int sum = 0;

    // Input grades
    for (int i = 0; i < numStudents; i++) {
        std::cout << "Enter grade for student " << i + 1 << ": ";
        std::cin >> grades[i];
        sum += grades[i];
    }

    // Calculate average
    double average = static_cast<double>(sum) / numStudents;

    // Output average
    std::cout << "The general average of the section is: " << average << std::endl;

    return 0;
}