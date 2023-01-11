#pragma once

#include "degree.h"

class Student {
public:
    Student();

    //getters
    std::string getID();
    std::string getFirstName();
    std::string getLastName();
    std::string getEmailAddress();
    std::string getAge();
    int getDays(int atArray);
    DegreeProgram getDegreeProgram();

    //setters
    void setID(std::string studentID);
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setEmailAddress(std::string emailAddress);
    void setAge(std::string age);
    void setDays(int num0, int num1, int num2);
    void setDegreeProgram(DegreeProgram degree);

    
    void print(int thing);

private:
    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    std::string age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;
};