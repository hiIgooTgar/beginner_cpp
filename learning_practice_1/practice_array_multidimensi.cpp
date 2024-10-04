#include <iostream>
using namespace std;

int main () {
	
	int matriks[5][5] = {
		{3, 5, 6, 7, 8},
		{8, 9, 2, 1, 3},
		{1, 2, 2, 5, 6}
	};
	
	printf("Matriks indeks (2, 4) %i \n", matriks[2][4]); // 6
	printf("Matriks indeks (1, 3) %i \n", matriks[1][3]); // 1
	cout<<"Matriks indeks (0, 2) "<<matriks[0][2]<<endl; // 6
	cout<<"Matriks indeks (0, 4) " << matriks[0][4]; // 8
	
	return 0;
}
