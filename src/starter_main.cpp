#include "solution.h"
#include <iostream>
#include <cstring>   // for strlen, strcpy

// TODO: function prototypes

// TODO: implement addStudent

// TODO: implement updateGPA

// TODO: implement printStudent

// TODO: implement averageGPA

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./program <capacity>" << std::endl;
        return 1;
    }

    int capacity = std::stoi(argv[1]);
    char* names[capacity];
    double gpas[capacity];
    int size = 0;

    int choice;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Add student\n";
        std::cout << "2. Update GPA\n";
        std::cout << "3. Print all students\n";
        std::cout << "4. Compute average GPA\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // TODO: implement menu logic
                std::cout << "Enter name: " << std::endl;
                char* name = new char[50];
                double gpa;
                std::cin >> name;
                std::cout << "Enter GPA: " << std::endl;
                std::cin >> gpa;
                try {
                    addStudent(name, gpa, names, gpas, size, capacity);
                } catch (const char* msg) {
                    std::cout << msg << std::endl;
                }
                break;
            }
            case 2: {
                // TODO: implement menu logic
                int index;
                std::cout << "Enter index: " << std::endl;
                std::cin >> index;
                if (index < 0 || index >= size) throw std::string("Invalid index");
                double gpa;
                std::cout << "Enter value: " << std::endl;
                std::cin >> gpa;
                updateGPA(&gpas[index], gpa);
                break;
            }
            case 3: {
                // TODO: implement menu logic
                for(int i = 0; i < size; i++){
                    printStudent(names[i], gpas[i]);
                }
                break;
            }
            case 4: {
                // TODO: implement menu logic
                std::cout << "Average: " << average(gpas, size) << ", Rounded: " << static_cast<int>(average(gpas, size)) << std::endl;
                
                
                break;
            }
            case 5: {
                std::cout << "Goodbye!" << std::endl;
                break;
            }
            default: {
                std::cout << "Invalid choice" << std::endl;
            }
        }
    } while (choice != 5);
    // TODO: free memory
    for(int i = 0; i < size; i++){
        delete[] names[i];
    }


    return 0;
}
