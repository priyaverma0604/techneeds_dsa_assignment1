#include <iostream>

int main() {
    int marks;

    // Prompt the user for input
    std::cout << "Enter the student's marks: ";
    std::cin >> marks;

    // Check the marks and display the appropriate message
    if (marks > 90) {
        std::cout << "Excellent" << std::endl;
    } else if (marks > 80) {
        std::cout << "Good" << std::endl;
    } else if (marks > 70) {
        std::cout << "Fair" << std::endl;
    } else if (marks > 60) {
        std::cout << "Meets Expectations" << std::endl;
    } else {
        std::cout << "Below Par" << std::endl;
    }

    return 0;
}