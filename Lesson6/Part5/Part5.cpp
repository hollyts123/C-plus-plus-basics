#include <iostream>
#include <string>
using namespace std;

struct Student {
		long id;
		string firstName;
		string lastName;
		double gpa;
		char group;
	};
	
	void showStudent(Student student) {	
	    cout << "Student's id: " << student.id << endl;
	    cout << "Student's' first name: " << student.firstName << endl;
	    cout << "Student's' last name: " << student.lastName << endl;
	    cout << "Student's GPA: " << student.gpa << endl;
	    cout << "Student's group: " << student.group << endl;
	}

int main() {
	
	string studentFirstName;
	string studentLastName;
	double studentGpa;
	char studentGroup;
	
	cout << "Enter your first name: " << endl;
	cin >> studentFirstName;
	cout << "Enter your last name: " << endl;
	cin >> studentLastName;
	cout << "Enter your GPA: " << endl;
	cin >> studentGpa;
	cout << "Enter your group: " << endl;
	cin >> studentGroup;
	cout << endl;
	
	Student student = {1, studentFirstName, studentLastName, studentGpa, studentGroup};
	showStudent(student);
}

