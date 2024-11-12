#include <iostream>
using namespace std;


int main() {
	string nim;
	string nama;
	string jurusan;
	string univ;
	char jk;
		
	cout<<"Masukan NIM : ";
	cin >> nim;
	
	cout<<"Masukan Nama : ";
	cin >> nama;
	
	cout<<"Masukan Jurusan : ";
	cin >> jurusan;
		
	cout<<"Masukan Jenis Kelamin | Pilih (L/P) : ";
	cin >> jk;
	
	cout<<"Masukan Nama Universitas : ";
	cin >> univ;
	
	cout<<endl<<endl;

	
	cout<<"== Biodata =="<<endl;
	cout<<"Nama : "<<nama<<endl;
	cout<<"NIM : "<<nim<<endl;
	cout<<"Jurusan : "<<jurusan<<endl;
	if(jk == 'L' || jk == 'l') {
		cout<<"Jenis Kelamin : "<<"Laki-laki"<<endl;
	} else if(jk == 'P' || jk == 'p') {
		cout<<"Jenis Kelamin : "<<"Perempuan"<<endl;
	}
	cout<<"Universitas : "<<univ<<endl;
}
