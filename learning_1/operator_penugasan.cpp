#include <iostream>
using namespace std;

int main() {
	
	int a, b;
	a = 5;
	b = 10;
	
	// b += a atau  b = b + a
	b += a;
	cout<<"Hasil dari b += a "<< b <<endl; 
	
	// b = a atau  b = b - a
	b -= a;
	cout<<"Hasil dari b -= a "<< b <<endl;
	
	// b *= a atau  b = b * a
	b *= a;
	cout<<"Hasil dari b *= a "<< b <<endl;
	
	// b /= a atau  b = b / a
	b /= a;
	cout<<"Hasil dari b /= a "<< b <<endl;
	
	// b %= a atau  b = b % a
	b %= a;
	cout<<"Hasil dari b %= a "<< b <<endl;
	
	return 0;
}


// “operator penugasan digunakan untuk mengisi nilai.”
