#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	char nama[64];
	char nim[10];
	char prodi[16];
	char fakultas[16];
	
	cout<<"Masukkan Nama anda : ";
	cin >> nama;
	
	cout <<"Masukkan NIM anda : ";
	cin >> nim;
	
	printf("Masukkan Prodi anda : ");
	scanf("%s", &prodi);
	
	cout<<"Masukkan Fakultas anda : ";
	scanf("%s", &fakultas);
	

	printf("Nama : %s \n", prodi);
	cout<<"NIM : "<<nim<<endl;
	printf("Prodi : %s \n", prodi);
	cout<<"Fakultas : "<<fakultas;
	
	
	return 0;
}
