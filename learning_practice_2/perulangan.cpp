#include <iostream>
using namespace std;

int z = 0;

int loopingFor(int a) {
	for(z; z < a; z++) {
		cout<<"Looping For | Index ke-"<<z<<endl;
	}
}

int loopingWhile(int a) {
	while(z < a) {
		printf("Looping While | Index ke-%i", z);
		z++;
	}
}

int loopingDoWhile(int a) {
	do {
		cout<<" Looping Do While | Index ke-"<<z<<endl;
		z++;
	} while(z < a);
}

int main() {
	
	int a;
	printf("Masukkan nilai Looping : ");
	scanf("%i", &a);
	
	loopingFor(a);
	loopingWhile(a);
	loopingDoWhile(a);
	
	return 0;
}
