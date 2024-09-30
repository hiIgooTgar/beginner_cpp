#include <iostream>
using namespace std;

int main() {
	
	typedef int number;
	typedef char* text;
	
	text name_book = "Learning Cpp | Limit Edision";
	number price = 100000;
	
	cout<<"Name book : "<< name_book << endl;
	printf("Price : %i \n", price);
	return 0;
}
