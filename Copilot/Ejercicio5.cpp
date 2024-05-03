#include <iostream>
#include <vector>

int main() {
    const int numStudents = 8;
    const int passGrade = 70;

    std::vector<int> grades(numStudents);
    int sum = 0;
    int numApproved = 0;
    int numFailed = 0;

    // Input grades
    for (int i = 0; i < numStudents; i++) {
        std::cout << "Enter grade for student " << i + 1 << ": ";
        std::cin >> grades[i];
        sum += grades[i];
        if (grades[i] >= passGrade) {
            numApproved++;
        } else {
            numFailed++;
        }
    }

    // Calculate average
    double average = static_cast<double>(sum) / numStudents;

    // Output results
    std::cout << "Number of approved students: " << numApproved << std::endl;
    std::cout << "Number of failed students: " << numFailed << std::endl;
    std::cout << "General average of the group: " << average << std::endl;

    return 0;
}