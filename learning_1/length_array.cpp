#include <iostream>
using namespace std;

int main() {

	string name[] = {"Cpp", "Java", "C", "C#", "Pascal", "Ruby", "Python"};
	
	int length = sizeof(name) / sizeof(*name);
	
	printf("As many array | Printf : %i \n", length);
	cout<<"Ass many array | Cout "<<length<<endl;
		
	return 0;
}
