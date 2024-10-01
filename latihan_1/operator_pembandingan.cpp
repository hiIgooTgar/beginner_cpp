#include <iostream>
using namespace std;

int main() {
	
	int a, b;
	a = 4;
	b = 3;
	bool hasil;
	
	cout<<"Nilai a = "<< a <<endl;
	cout<<"Nilai b = "<< b << endl;
	
	cout<<endl;
	
	hasil = a > b;
	cout<<"Hasil a > b = " << hasil << endl;
	
	hasil = a < b;
	cout<<"Hasil a < b = " << hasil << endl;
	
	hasil = a >= b;
	cout<<"Hasil a >= b = " << hasil << endl;
	
	hasil = a <= b; 
	cout<<"Hasil a <= b = " << hasil << endl;
	
	hasil = a == b;
	cout<<"Hasil a == b = " << hasil << endl;
	
	hasil = a != b;
	cout<<"Hasil a != b = " << hasil << endl;
	
	return 0;
}

// Operator Pembanding atau operator relasi
