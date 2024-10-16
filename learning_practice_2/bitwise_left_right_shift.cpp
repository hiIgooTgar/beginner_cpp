#include <iostream>
using namespace std;

int main() {
	int x = 10;
	int result_left;
	
	result_left = x << 1;
	cout<<"Result a << 1 : "<<result_left<<endl<<endl;
	
	
	int y = 5;
	int result_right;
	result_right = y >> 1;
	cout<<"Result a >> 1 : "<<result_right<<endl; 
	
	return 0;
}
