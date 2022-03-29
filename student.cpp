#include "degree.h"
#include "student.h"
#include <iostream>
#include <sstream>

using namespace std;

string stringDegreeProgram[] = { "SECURITY", "NETWORK", "SOFTWARE", "BLANK" };

Student::Student(string studentID, string firstName, string lastName, string emailAddr, int studentAge, vector<int> daysInCourse, DegreeProgram degreeProgram)
{
	setStudentID(studentID);
	setFirstName(firstName);
	setLastName(lastName);
	setEmailAddr(emailAddr);
	setStudentAge(studentAge);
	setDaysInCourse(daysInCourse);
	setDegreeProgram(degreeProgram);
}

//Setter Fucntions
void Student::setStudentID(string studentID) { this->studentID = studentID; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmailAddr(string emailAddr) { this->emailAddr = emailAddr; }
void Student::setStudentAge(int studentAge) { this->studentAge = studentAge; }
void Student::setDaysInCourse(vector<int> daysInCourse) { this->daysInCourse = daysInCourse; }
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

//Getter Functions
string Student::getStudentID() const { return studentID; }
string Student::getFirstName() const { return firstName; }
string Student::getLastName() const { return lastName; }
string Student::getEmailAddr() const { return emailAddr; }
int Student::getStudentAge() const { return studentAge; }
vector<int> Student::getDaysInCourse() const { return daysInCourse; }
DegreeProgram Student::getDegreeProgram() const { return degreeProgram; }

string Student::getDaysInCourseString() const
{
	stringstream ss;
	for (int i = 0; i < daysInCourse.size(); i++) {
		if (i != 0)
			ss << ",";
		ss << daysInCourse[i];
	}
	string sDays = ss.str();
	return sDays;
}

string Student::getDegreeProgramString() const
{
	string sDegree;
	if (degreeProgram == DegreeProgram::SECURITY) {
		sDegree = stringDegreeProgram[(int)degreeProgram];
	}
	else if (degreeProgram == DegreeProgram::NETWORK) {
		sDegree = stringDegreeProgram[(int)degreeProgram];
	}
	else if (degreeProgram == DegreeProgram::SOFTWARE) {
		sDegree = stringDegreeProgram[(int)degreeProgram];
	}
	return sDegree;
}

void Student::Print() {
	cout << "Student ID: " << getStudentID() << "\t";
	cout << "First Name: " << getFirstName() << "\t";
	cout << "Last Name: " << getLastName() << "\t";
	cout << "Email Address: " << getEmailAddr() << "\t";
	cout << "Age: " << getStudentAge() << "\t" << "\t";
	cout << "Days In Course: " << getDaysInCourseString() << "\t";
	cout << "Degree Program: " << getDegreeProgramString() << endl;
}

Student::~Student() {} 