#include <iostream>
using namespace std;

string nama, nim, prodi, fakultas;

string perkenalan(string nama, string nim, string prodi, string fakultas) {
	printf("\n\n==== Data Mahasiswa ===\n");
	printf("Nama : %s \n", nama.c_str());
	printf("NIM : %s \n", nim.c_str());
	printf("Prodi : %s \n", prodi.c_str());
	printf("Fakultas : %s \n", fakultas.c_str());
}

int main() {
	cout<<"Masukkan Nama Anda : ";
	getline(cin, nama);
	cout<<"Masukkan NIM Anda : ";
	getline(cin, nim);
	cout<<"Masukkan Prodi Studi Anda : ";
	getline(cin, prodi);
	cout<<"Masukkan Fakultas Anda : ";
	getline(cin, fakultas);
	perkenalan(nama, nim, prodi, fakultas);
	
	return 0;
}


