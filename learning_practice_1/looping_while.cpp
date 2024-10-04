#include <iostream>
using namespace std;

int main() {
		
	int a = 0;
	int b = 5;
	
	while(a <= 5) {
		printf("Hello Cpp | While Printf %i \n", a);
		a++;
	}
	
	while(a <= 5) {
		cout<<"Hello Cpp | While Cout "<<a<<endl;
		a++;
	}
	
	while(b>=0) {
		printf("Hello Cpp | While Printf %i \n", b);
		b--;
	}
	
	while(b>=0) {
		cout<<"Hello Cpp | While Cout "<<b<<endl;
		b--;
	}
	
	
	
	return 0;
}


/*

Perulangan yang termasuk dalam Counted Loop:
1. Perulangan For

Perulangan yang termasuk dalam Uncounted Loop:
1. Perulangan While
2. Perulangan Do/While

*/
