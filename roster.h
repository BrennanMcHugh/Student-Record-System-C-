#pragma once

#include <string>
#include "student.h"


const std::string studentData[5] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Brennan,McHugh,bmchug1@wgu.edu,28,15,20,25,SOFTWARE"
};

class Roster {
public:
    //constructor
    Roster();
    //destructor
    ~Roster();

    Student** classRosterArray;

    void addStudent(int index, std::string a, std::string b, std::string c, std::string d, std::string e, int f, int g, int h, DegreeProgram x);

    void removeStudent(std::string stID);

    void parseArray(int rosterIndex);

    //prints all student data in table
    void printAll();

    //prints average course length for each student
    void printAverageDaysInCourse(std::string stID);

    //prints all invalid emails not matching defined parameters
    void printInvalidEmails();

    //prints students data by specific degree
    void printByDegreeProgram(DegreeProgram degreeprogram);

private:
    void printDegreeString(int dp);
};
