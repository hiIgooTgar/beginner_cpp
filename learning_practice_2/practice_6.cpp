#include <iostream>
using namespace std;

int main() {
	int panjang, lebar, luas;
	
	cout<<"====== Menghitung Luas Persegi Panjang ======"<<endl<<endl;
	
	cout<<"Masukkan Panjang : ";
	cin >> panjang;
	cout<<"Masukkan Lebar : ";
	cin >> lebar;
	
	luas = panjang * lebar;
	cout<<endl;
	cout<<"Hasil luas Persegi Panjang dengan panjang "<< panjang << " dan Lebar " << lebar << " Yaitu adalah "<< luas;
	
	return 0;
}
