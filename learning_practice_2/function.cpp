#include <iostream>
using namespace std;

string introduction(string nama, string nim, string prodi, string fakultas, string alamat) {
	cout<<"Name : "<<nama<<endl;
	cout<<"NIM : "<<nim<<endl;
	printf("Program Study : %s \n", prodi.c_str());
	printf("Faculty : %s \n", fakultas.c_str());
	printf("Address:  %s \n", alamat.c_str());
}

int main() {
	cout<<"== Data Student =="<<endl
	introduction("Igo Tegar Prambudhy", "24SA11A159", "Informatics", "Computer Science", "Indonesian");
	
	return 0;
}
