#include <iostream>
using namespace std;

void inputCin(string input) {
	cout<<"Masukkan NIM : "; 
	cin >> input;
}

int main() {
	string nama;
	string jurusan;
	
	cout<<"Masukan Nama : ";
	cin >> nama;
	
	inputCin("24SA11A");
	
	cout<<"Masukan Jurusan : ";
	cin >> jurusan;
	
	cout<<endl<<endl;
	
	cout<<"== Biodata =="<<endl;
	cout<<"Nama : "<<nama<<endl;
	cout<<"NIM : "<<inputCin<<endl;
	cout<<"Jurusan : "<<jurusan<<endl;
	
}
