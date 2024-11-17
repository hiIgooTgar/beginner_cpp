#include <iostream>
using namespace std;

int main() {
	int jari_jari;
	const double phi = 3.14;
	double luas;
	
	cout<<"====== Menghitung Luas Lingkaran ======"<<endl<<endl;
	
	cout<<"Masukkan Jari-Jari Lingkaran : ";
	cin >> jari_jari;
	luas = phi * jari_jari * jari_jari;
	cout<<endl;
	
	cout<<"Hasil luas lingkaran dengan jari jari "<< jari_jari << " Yaitu adalah "<< luas;
	
	return 0;
}
