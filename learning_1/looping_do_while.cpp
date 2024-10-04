#include <iostream>
using namespace std;

int main() {
	
	int a = 0;
	int b = 5;
	
	do {
		printf("Hello Cpp | Do While Printf %i \n", a);
		a++;
	} while(a <= 5);
	
	cout<<endl;
	
	do {
		cout<<"Hello Cpp | Do While Cout "<<a<<endl;
		a++;
	} while(a <= 5);
	
	cout<<endl;
	
	do {
		printf("Hello Cpp | Do While Printf %i \n", b);
		b--;
	} while(b >= 0);
	
	cout<<endl;
	
	do {
		cout<<"Hello Cpp | Do While Cout "<<b<<endl;
		b--;
	} while(b >= 0);
	
	return 0;
}
