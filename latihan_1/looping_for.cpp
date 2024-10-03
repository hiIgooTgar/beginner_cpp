#include <iostream>
using namespace std;

int main () {
	
	int a = 0;
	int b = 5;
	
	for(a; a <= 5; a++) {
		printf("Hello Cpp | Printf, I like you %i \n", a);
	}
	
	cout<<endl;
	
	for(a; a <= 5; a++) {
		cout<<"Hello Cpp | Cout, I Like you "<<a<<endl;
	}
	
	cout<<endl;
	
	for(b; b >= 0; b--) {
		printf("Hello Cpp | Printf, I like you %i \n", b);
	}
	
	cout<<endl;
	
	for(b; b >= 0; b--) {
		cout<<"Hello Cpp | Cout, I like you"<<b<<endl;
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
