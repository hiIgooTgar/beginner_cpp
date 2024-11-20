#include <iostream>
using namespace std;

void detailMakanan() {
	cout<<"===== Menu Makananan | Restoran Eiao ====="<<endl;
	cout<<"1. Nasi Goreng -- Rp. 12.000"<<endl;
	cout<<"2. Ayam Goreng Kremes -- Rp. 10.000"<<endl;
	cout<<"3. Bakso Tetelan -- Rp. 15.000"<<endl;
	cout<<"4. Tongseng -- Rp. 20.000"<<endl;
	cout<<"5. Soto Ayam -- Rp. 15.000"<<endl;
}

void detailMinuman() {
	cout<<"===== Menu Minuman | Restoran Eiao ====="<<endl;
	cout<<"1. Es Teh -- Rp. 3.000"<<endl;
	cout<<"2. Es Jeruk -- Rp. 5.000"<<endl;
	cout<<"3. Jus Buah -- Rp. 7.000"<<endl;
	cout<<"4. Kopi Susu -- Rp. 6.000"<<endl;
	cout<<"5. Wedang Ronde -- Rp. 6.000"<<endl;
}

int main() {
	string kostumer;
	int makanan, jumlahMakanan, minuman, jumlahMinuman, totalMakanan, totalMinuman;
	cout<<"===== Restoran Eiao | Banten ====="<<endl;
	cout<<"Masukan nama kostumer : ";
	cin >> kostumer;
	cout<<endl;
	detailMakanan();
	cout<<"Masukkan pilihan makanan (1-5) : ";
	cin >> makanan;
	cout<<"Jumlah porsi makanan : ";
	cin >> jumlahMakanan;
	
	if(makanan == 1) {
		total = 12000 * jumlahMakanan;
	} else if(makanan == 2) {
		total = 10000 * jumlahMakanan;
	} else if(makanan == 3) {
		total = 15000 * jumlahMakanan;
	} else if(makanan == 4) {
		total = 20000 * jumlahMakanan;
	} else if(makanan == 5) {
		total = 15000 * jumlahMakanan;
	}
	
	cout<<"Total harga makanan : "<< totalMakanan<<endl;
 	
	cout<<endl;
	detailMinuman();
	cout<<"Masukkan pilihan minuman (1-5) : ";
	cin >> minuman;
	cout<<"Jumlah gelas minuman : ";
	cin >> jumlahMinuman;
	
	 
	
	return 0;
}
