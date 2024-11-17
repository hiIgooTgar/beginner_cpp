#include <iostream>
using namespace std;

int main() {
	int alas, tinggi, luas;
	
	cout<<"====== Menghitung Luas Segitiga ======"<<endl<<endl;
	
	cout<<"Masukkan Alas : ";
	cin >> alas;
	cout<<"Masukkan Tinggi : ";
	cin >> tinggi;
	
	luas = (alas * tinggi) / 2;
	cout<<endl;
	cout<<"Hasil luas Segitiga dengan alas "<< alas << " dan tinggi " << tinggi << " Yaitu adalah "<< luas;
	
	return 0;
}
