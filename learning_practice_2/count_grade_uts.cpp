#include <iostream>
using namespace std;



int main() {
	string courseName[7] = {"Rekayasa Perangkat Lunak", "Arsitektur dan Organisasi", "Sistem Basis Data", "Kalkulus", 
	"Pengantar Multimedia", "Algoritma dan Struktur Data", "Pengantar Sistem Cerdas"};
	
	int value, subject;
	string name, grade, course, gender, address;
	cout<<"=========== Student | Courses - Informatics ==========="<<endl;
	cout<<"Enter your full name : ";
	getline(cin, name);
	cout<<"Enter your gender (M/F) : ";
	getline(cin, gender);
	if(gender == "M" || gender == "m") {
		gender = "Male";
	} else if (gender == "F" || gender == "f") {
		gender = "Female";
	}
	cout<<"Enter your full address : ";
	getline(cin, address);
	
	cout<<endl<<endl;
	cout<<"====== Course | Informatics ======"<<endl;
	cout<<courseName[0]<<" | 1"<<endl;
	cout<<courseName[1]<<" | 2"<<endl;
	cout<<courseName[2]<<" | 3"<<endl;
	cout<<courseName[3]<<" | 4"<<endl;
	cout<<courseName[4]<<" | 5"<<endl;
	cout<<courseName[5]<<" | 6"<<endl;
	cout<<courseName[6]<<" | 7"<<endl;
	cout<<"=================================="<<endl;
	cout<<"Enter your course (1 - 7) : ";
	cin >> subject;
	
	if(subject == 1) {
		course = courseName[0];
	} else if(subject == 2) {
		course = courseName[1];
	} else if(subject == 3) {
		course = courseName[2];
	} else if(subject == 4) {
		course = courseName[3];
	} else if(subject == 5) {
		course = courseName[4];
	} else if(subject == 6) {
		course = courseName[5];
	} else if(subject == 7) {
		course = courseName[6];
	} else {
		course = "course invalid";
	}
	
	cout<<"Enter you value : ";
	cin >> value;
	
	if(value >= 90) {
		grade = "Grade is A";
	} else if(value >= 80) {
		grade = "Grade is B+";
	} else if(value >= 70) {
		grade = "Grade is B";
	} else if(value >= 60) {
		grade = "Grade is C";
	} else {
		grade = "Grade is E";
	}
	
	cout<<endl;
	cout<<"=========== Course of Student Informatics ==========="<<endl;
	cout<<"Full name : "<<name<<endl;
	cout<<"Gender : "<<gender<<endl;
	cout<<"Address : "<<address<<endl;
	cout<<"Course : "<<course<<endl;
	cout<<"Value : "<<value<<endl;
	cout<<"Grade : "<<grade<<endl; 
 	
	
	return 0;
}
