#include "degree.h"
#include "student.h"
#include "roster.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	cout << "Course: Scripting and Programming Applications - C867" << endl;
    cout << "Language: C++" << endl;
    cout << "StudentID: 001548573" << endl;
	cout << "Student Name: Javier Nieves" << endl << endl << endl;

    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Dan ,Adams,DanAdamsHarder@Outlook.com,34,21,32,44,SOFTWARE",
        "A6,Javier,Nieves,drcappuchino2@gmail.com,27,20,31,43,SOFTWARE"
    };

    const int studentNum = sizeof(studentData) / sizeof(studentData[0]);

    Roster classRoster;
    for (int i = 0; i < studentNum; i++) {
        classRoster.Parse(studentData, i);

    }

    classRoster.PrintAll();
    classRoster.PrintInvalidEmail();

    //Print Average Days in Course
    for (int i = 0; i < studentNum; i++) {
        classRoster.PrintDaysInCourse(classRoster.classRosterArray.at(i)->getStudentID());
    }
    cout << endl;
    classRoster.PrintByDegree(DegreeProgram::SOFTWARE);
    cout << endl;

    classRoster.Remove("A3");
    classRoster.PrintAll();
    classRoster.Remove("A3");

    return 0;
}