#include <iostream>
using namespace std;

int main() {
		
	char respon = 'y';
	int counter = 0;
	
	while(respon == tolower('y')) {
		
		cout<<"Hello Cpp, Do you want to repeat?"<<endl;
		cout<<"Answer (Y/N) : ";
		cin >> respon;
		
		counter++;
	}
		
	cout<<"Yeah, Your answer has stopped"<<endl;
//	printf("You have repeated as much %i \n ", counter);
	cout<<"You have repeated as much "<<counter<<endl;
	cout<<endl;
	
	return 0;
}
