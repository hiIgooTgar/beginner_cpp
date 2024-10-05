#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Students {
	string name;
	string nim;
	int age;
	char program[64];
	char faculty[64];
};

//Deklarasi params
void display(Students s);

int main () {
	
	Students s1;
	
	cout<<"What's your name : ";
	cin >> s1.name;
	
	cout<<"Enter your NIM : ";
	cin >> s1.nim;
	
	cout<<"How old are you : ";
	cin >> s1.age;
	
//	cout<<"Enter your program study : ";
//	cin >> s1.program;
//	
//	cout<<"Enter your faculty : ";
//	cin >> s1.faculty;
	
	cout<<"Enter your program study : ";
	scanf("%s", s1.program);
	
	cout<<"Enter your faculty : ";
	scanf("%s", s1.faculty);

	cout<<endl;
	cout<<endl;
	
	display(s1); // passing structure as an argument
	

	
	return 0;
}

// membuat fungsi dengan struct sebagai parameter
void display(Students s) {
	cout<<"=== Displaying information === \n";
	cout<<"Name : "<<s.name<<endl;
	cout<<"NIM : "<<s.nim<<endl;
	cout<<"Age : "<<s.age<<endl;
	cout<<"Program Study : "<<s.program<<endl;
	cout<<"Faculty : "<<s.faculty<<endl;
//	printf("Program Study : %s \n", s.program);
//	printf("Faculty : %s \n", s.faculty);
}

