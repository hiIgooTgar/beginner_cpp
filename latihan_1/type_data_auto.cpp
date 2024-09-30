#include <iostream>
using namespace std;

int main() {
	
	auto name = "Igo Tegar Prambudhy";
	auto age = 18;
	auto height = 170.5;
	auto married = false;
	
	cout<<"Name : "<< name <<endl;
	cout<<"Type data : "<< typeid(name).name() << endl;
	
	cout<<"Age : "<< age <<endl;
	cout<<"Type data : "<< typeid(age).age() << endl;
	
	cout<<"Height : "<< height<< endl;
	cout<<"Type data : "<< typeid(height).height() << endl;
	
	cout<<"Married : " << married << endl;
	cout<<"Type data : "<< typeid(married).married() << endl; 
	
	
	return 0;
}

// Pastikan saat compile, kita menentukan versi C++ yang dipakai dengan cara menambahkan argumen -std=c++11

/* 

Untuk variabel yang kita isi dengan teks "Igo Tegar Prambudhy" ternyata tipe datanya adalah PKc yang artinya Pointer Konstanta Char.
Lalu untuk variabel lainnya:

angka 18 tipe datanya adalah i (integer)
angka 170.5 tipe datanya adalah d (double)
false tipe datanya adalah b (boolean)

*/
