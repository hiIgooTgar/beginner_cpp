#include <iostream>
using namespace std;

int main() {
	
	int a = 1;
	int b = 0;
	bool hasil;
	
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	
	hasil = a&&b;
	cout<<"Hasil a && b = "<<hasil<<endl;
	
	hasil = a||b;
	cout<<"Hasil a || b = "<<hasil<<endl;
	
	cout<<"!a= "<<!a<<endl;
	
	
	return 0;
}

/*

Nama Operator		Simbol
Logika AND			&&
Logika OR			||
Negasi/kebalikan	!

Pernyataan 1	Pernyataan 2	Hasil Logika AND
true			true			true
true			false			false
false			true			false
false			false			false

 
*/
