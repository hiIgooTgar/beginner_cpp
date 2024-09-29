#include <iostream>
using namespace std;

int main() {
	
	string name; 
	int age;
	char gender;
	
	cout<<"===== Introducation "<<endl;
	cout<<endl;
	cout<<"What's your name : "<<endl;
	cout<<"Answer : ";
	getline(cin, name);
	
	cout<<"How old are you : "<<endl;
	cout<<"Answer : ";
	cin >> age;
	
	cout<<"What is your gender [Male|Female] : "<<endl;
	cout<<"Answer : ";
	cin >> gender;
	
	cout<<"Hello Cpp , "<<"My name is "<<name<<", Now I'am "<<age<< "Years old ";
	cout<<" and my gender "<<gender;

	return 0;
}
