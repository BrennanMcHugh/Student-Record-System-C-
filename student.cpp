#pragma once

#include <string>
#include <iostream>
#include "student.h"


Student::Student() { 
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = "";
    
    for (int i = 0; i < 3; i++) 
    {this->daysInCourse[i] = 0;}

    this->degreeProgram = OTHER;
};

//GETTERS
std::string Student::getID() { return studentID; }
std::string Student::getFirstName() { return firstName; }
std::string Student::getLastName() { return lastName; }
std::string Student::getEmailAddress() { return emailAddress; }
std::string Student::getAge() { return age; }
int Student::getDays(int atArray) { return daysInCourse[atArray]; }
DegreeProgram Student::getDegreeProgram() { return degreeProgram; }

//SETTERS
void Student::setID(std::string studentID) { this->studentID = studentID; }
void Student::setFirstName(std::string firstName) { this->firstName = firstName; }
void Student::setLastName(std::string lastName) { this->lastName = lastName; }
void Student::setEmailAddress(std::string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(std::string age) { this->age = age; }
void Student::setDays(int num0, int num1, int num2) { this->daysInCourse[0] = num0; this->daysInCourse[1] = num1; this->daysInCourse[2] = num2; }
void Student::setDegreeProgram(DegreeProgram degree) { this->degreeProgram = degree; }

void Student::print(int thing) {
    switch (thing) {
    case 0:
        std::cout << studentID;
        break;
    case 1:
        std::cout << firstName;
        break;
    case 2:
        std::cout << lastName;
        break;
    case 3:
        std::cout << emailAddress;
        break;
    case 4:
        std::cout << age;
        break;
    case 5:
        std::cout << daysInCourse[0];
        break;
    case 6:
        std::cout << daysInCourse[1];
        break;
    case 7:
        std::cout << daysInCourse[2];
        break;
    case 8:
        std::cout << degreeProgram;
        break;
    default:
        std::cout << "NUL";
        break;
    }
}