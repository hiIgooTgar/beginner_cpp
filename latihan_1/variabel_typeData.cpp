#include <iostream>
using namespace std;

int main() {
	
	string name;
	string studying;
	string faculty; 
	int age;
	char gender;
	
	cout<<"===== Introducation ====="<<endl;
	cout<<endl;
	cout<<"What's your name : "<<endl;
	cout<<"Answer : ";
	getline(cin, name);
	
	cout<<"From which program study :  "<<endl;
	cout<<"Answer : ";
	cin >> studying;
	
	cout<<"From which faculty : "<<endl;
	cout<<"Answer : ";
	cin >> faculty;
	
	cout<<"How old are you : "<<endl;
	cout<<"Answer : ";
	cin >> age;
	
	cout<<"What is your gender [M for Male |F for Female] : "<<endl;
	cout<<"Answer : ";
	cin >> gender;
	
	
	cout<<"Hello Cpp , "<<"My name is "<<name<<". From which program study "<<studying<<" Faculty "<<faculty
	<<" , Now I'am "<<age<< " Years old ";
	cout<<" and my gender "<<gender;

	return 0;
}
