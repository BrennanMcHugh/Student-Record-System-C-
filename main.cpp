#include <iostream>
#include <string>

#include "roster.h"
#include "student.h"


using namespace std;

int main() {
    cout << "C867 - Scripting and Programming-Applications" << endl;
    cout << "C++" << endl;
    cout << "Brennan McHugh" << endl;
    cout << "010233940";
    cout << "\n------------------------------------------------";
    cout << endl << endl << endl;

    Roster* classRoster = new Roster();

    for (int i = 0; i <= 5; i++) {classRoster->parseArray(i);}
    
    cout << "All students: ";
    cout << endl;
    classRoster->printAll();
    classRoster->printInvalidEmails();

    cout << "Average course length for each student:" << endl;

    for (int i = 0; i < 5; i++) {
        classRoster->printAverageDaysInCourse(classRoster->classRosterArray[i]->getID());
    }

    cout << endl;
    classRoster->printByDegreeProgram(SOFTWARE);

    cout << endl;
    classRoster->removeStudent("A3");

    cout << endl;
    cout << "All students:\n";
    classRoster->printAll();
    classRoster->removeStudent("A3");


    // roster.h
    // Roster::~Roster();
    
    return 0;
}