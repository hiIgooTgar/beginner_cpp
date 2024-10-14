#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int result_left;
	
	result_left = a << 1;
	cout<<"Result a << 1 : "<<result_left<<endl<<endl;
	
	
	int b = 5;
	int result_right;
	result_right = b >> 1;
	cout<<"Result a >> 1 : "<<result_right<<endl; 
	
	return 0;
}
