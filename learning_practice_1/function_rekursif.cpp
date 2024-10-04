#include <iostream>
using namespace std;

int sum(int n);

int main() {
	
	int number, result;
	
	printf("Enter a positive integer : ");
	scanf("%i", &number);
	
	result = sum(number);
	
	printf("Sum = %i", result);
	
	
	return 0;
}

int sum(int num) {
	if(num != 0 ) {
		return num + sum(num - 1);
	} else {
		return num;
	}
}

//Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri.
