#include <iostream>
using namespace std;

int input(int &a) {
	printf("Masukkan nilai anda : ");
	scanf("%i", &a);
}

int main() {
	int b;
	input(b);
	
	if(b >= 95) {
		cout<<"Nlai anda A+"<<endl;
	} else if(b >= 90) {
		printf("Nilai anda A \n");
	} else if(b>= 85) {
		cout<<"Nilai anda A-"<<endl;
	} else if(b >= 83) {
		printf("Nilai anda B+ \n");
	} else if(b >= 80) {
		cout<<"Nilai anda B"<<endl;
	} else if(b >= 78) {
		printf("Niali anda B- \n");
	} else if(b >= 76) {
		cout<<"Nilai anda C"<<endl;
	} else {
		cout<<"Remidi"<<endl;
	}
	
	return 0;
}
