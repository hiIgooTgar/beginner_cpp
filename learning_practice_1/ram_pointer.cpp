#include <iostream>
using namespace std;

int main() {
	
	int a;
	int b[10];
	
	cout<<"Alamat memori a adalah "<<&a<<endl; //& dibaca ampersand;
	cout<<"Alamat memori b adalah "<<&b<<endl;
		
	return 0;
}

/*

Pointer adalah sebuah variabel khusus yang berisi alamat memori. 
Pointer nantinya akan bisa mengakses data yang ada di suatu alamat memori.

“Pointer berisi alamat memori”

Pointer dibuat dengan menambahkan simbol * (asterik) di depan namanya, 
kemudian diisi dengan alamat memori yang akan digunakan sebagai referensi.

*/
