#include <iostream>
using namespace std;

int main() {
	
	int a = 5;
	int *ptr_a = &a;
	
	cout<<"Alamat memori variabel a adalah "<< &a<<endl;
	
	cout<<"Nilai a awal = "<<a<<endl;
	*ptr_a = 21;
	cout<<"Nilai a diubah = "<<a<<endl;

	return 0;
}


/* 

Nama Operator		Simbol		Keterangan
Alamat memori		&			untuk mengambil alamat memori
Pointer				*			untuk membuat pointer
Ternary				? :			untuk membuat kondisi
Increment			++			untuk menambah 1
Decrement			--			untuk mengurangi 1

*/
