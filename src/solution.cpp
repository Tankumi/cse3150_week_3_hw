#include "solution.h"
#include <string>
#include <iostream>


void addStudent(char* name, double gpa, char* names[], double gpas[], int& size, int capacity) {
    // TODO: throw "Full" if size == capacity, else insert and ++size
    if (size >= capacity){
        throw std::string("List full");
        
    }else{
        names[size] = name;
        gpas[size] = gpa;
        size++;
    }
}

void updateGPA(double* gpaPtr, double newGpa){
    if (gpaPtr == nullptr){
        return;
    }
    *gpaPtr = newGpa;
}

void printStudent(const char* name, const double& gpa){
    std::cout << name << "'s GPA: " << gpa << std::endl;
}

double average(const double values[], int size){
    if (size == 0){
        throw std::string("No students");
    }
    double sum = 0.0;
    for(int i = 0; i < size; i++){
        sum += values[i];
    }
    return sum/size;
}

