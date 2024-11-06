#include <iostream>
using namespace std;

void square(int square) {
	for(int a = 0; a <= square; a++) {
		for(int b = 0; b <= square; b++) {
			printf("*");
		}
		printf("\n");
	}
}

void rightTriangle(int rTriangle) {
	for(int a = 0; a <= rTriangle; a++) {
		for(int b = 0 ; b <= a; b++) {
			cout<<b;
		}
		printf("\n");
	}
}

void rightTriangleSecond(int rTriangle) {
	for(int a = rTriangle; a >= 0; a--) {
		for(int b = 0; b <= rTriangle; b++) {
			if(a <= b) {
				cout<<b;
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main() {
	
	
	square(10);
	cout<<endl<<endl;
	rightTriangle(10);
	cout<<endl<<endl;
	rightTriangleSecond(10);
	
	return 0;
}
