#include <iostream>
using namespace std;

/*
pass by value
void kali_tiga(int a = 20)
*/

//pass by reference
/*

Fungsi kali_tiga() memiliki parameter berupa pointer, artinya kita harus memberikan alamat memori untuk pointer ini.

Pada saat pemanggilan, fungsi kali_tiga() kita isi parameternya dengan alamat memori dari variabel angka.

*/
void kali_tiga(int *num) {
	num[0] = num[0] * 3;
}

int main() {
	
	int nilai;
	cout<<"Masukkan angka berapa saja, akan dikali tiga : ";
	cin >> nilai;
	
	kali_tiga(&nilai);
	
	cout<< "Isi variabel angka = "<< nilai <<endl;
	
	
	return 0;
}

//Ini disebut pass by value, karena di sana kita memberikan nilai 4 secara langsung.
//Ini disebut pass by reference, karena kita memberikan alamat memori.
