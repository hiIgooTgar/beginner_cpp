#include <iostream>
using namespace std;

int main() {
	
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	a[2] = 1826;
	cout<<a[2]<<endl;
	
	int b[10];
	
	b[0] = 847;
	b[1] = 113;
	b[2] = 951;
	b[3] = 634;
	b[4] = 713;
	
	cout<<"Nilai ke "<<b[0]<<endl;
	printf("Nilai ke %i \n", b[1]);
	cout<<"Nilai ke "<<b[2]<<endl;
	printf("Nilai ke %i \n", b[3]);
	cout<<"Nilai ke "<<b[4]<<endl;
	
	
	
	char name[32] = {'s', 'c', 'b'};
	
	cout<<"My name is "<<name[0]<<endl;
	printf("My name is %c \n", name[1]);
	
	string address[] = {"Purbalingga", "Banyumas", "Cilacap"};
	
	cout<< "I live in "<< address[0]<<endl;
	printf("I live in %s \n", address[2].c_str());
	
	
	
	return 0;
}
