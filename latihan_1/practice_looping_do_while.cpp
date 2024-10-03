#include <iostream>
using namespace std;

int main() {
	
	int counter = 0;
	char respon = 'y';
	
	do {
		printf("Hello Cpp, Do you want to repeat? \n");
		printf("Answer (Y/N) : ");
		cin >> respon;
//		scanf("%s", &respon);
		counter++;
	} while(respon == tolower(respon));
	
	cout<<endl;
	cout<<"Yeah your have stopped!"<<endl;
	cout<<"Your has repeated as much "<<counter<<endl;
	
	return 0;
}
