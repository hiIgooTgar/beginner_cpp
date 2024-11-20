#include <iostream>
using namespace std;

void detailMenuMakanan() {
	cout<<"===== Menu Makananan | Restoran Eiao ====="<<endl;
	cout<<"1. Nasi Goreng -- Rp. 12.000"<<endl;
	cout<<"2. Ayam Goreng Kremes -- Rp. 10.000"<<endl;
	cout<<"3. Bakso Tetelan -- Rp. 15.000"<<endl;
	cout<<"4. Tongseng -- Rp. 20.000"<<endl;
	cout<<"5. Soto Ayam -- Rp. 15.000"<<endl;
}

void detailMenuMinuman() {
	cout<<"===== Menu Minuman | Restoran Eiao ====="<<endl;
	cout<<"1. Es Teh -- Rp. 3.000"<<endl;
	cout<<"2. Es Jeruk -- Rp. 5.000"<<endl;
	cout<<"3. Jus Buah -- Rp. 7.000"<<endl;
	cout<<"4. Kopi Susu -- Rp. 6.000"<<endl;
	cout<<"5. Wedang Ronde -- Rp. 6.000"<<endl;
}

int main() {
	string kostumer, alamatKostumer, detailMakanan, detailMinuman;
	int makanan, jumlahMakanan, minuman, jumlahMinuman, totalMakanan, totalMinuman, pembayaran, totalTagihan;
	cout<<"===== Restoran Eiao | Banten ====="<<endl;
	cout<<"Masukan nama kostumer : ";
	cin >> kostumer;
	cout<<"Masukan alamat kostumer : ";
	cin >> alamatKostumer;
	cout<<endl;
	detailMenuMakanan();
	cout<<endl;
	cout<<"Masukkan pilihan makanan (1-5) : ";
	cin >> makanan;
	cout<<"Jumlah porsi makanan : ";
	cin >> jumlahMakanan;
	if(makanan == 1) {
		totalMakanan = 12000 * jumlahMakanan;
	} else if(makanan == 2) {
		totalMakanan = 10000 * jumlahMakanan;
	} else if(makanan == 3) {
		totalMakanan = 15000 * jumlahMakanan;
	} else if(makanan == 4) {
		totalMakanan = 20000 * jumlahMakanan;
	} else if(makanan == 5) {
		totalMakanan = 15000 * jumlahMakanan;
	} else {
		cout<<"Pesanan makanan gagal | tidak valid"<<endl;
	}
	cout<<"Total harga makanan : Rp. "<< totalMakanan<<endl<<endl;

	detailMenuMinuman();
	cout<<endl;
	cout<<"Masukkan pilihan minuman (1-5) : ";
	cin >> minuman;
	cout<<"Jumlah gelas minuman : ";
	cin >> jumlahMinuman;
	if(minuman == 1) {
		totalMinuman = 3000 * jumlahMinuman;
	} else if(minuman == 2) {
		totalMinuman = 5000 * jumlahMinuman;
	} else if(minuman == 3) {
		totalMinuman = 7000 * jumlahMinuman;
	} else if(minuman == 4) {
		totalMinuman = 6000 * jumlahMinuman;
	} else if(minuman == 5) {
		totalMinuman = 6000 * jumlahMinuman;
	} else {
		cout<<"Pesanan minuman gagal | tidak valid"<<endl;
	}
 	cout<<"Total harga minuman : Rp. "<<totalMinuman<<endl<<endl;
 	
 	totalTagihan = totalMakanan + totalMinuman;
 	cout<<"Total tagihan pembayaran : Rp. "<<totalTagihan<<endl;
 	cout<<"Masukan nominal pembayaran : Rp. ";
 	cin >> pembayaran;
 	if(pembayaran < totalTagihan) {
 		cout<<"Pembayaran gagal, pembayaran tidak sesuai nominal!"<<endl<<endl;
 		while(pembayaran < totalTagihan) {
 			cout<<"Pembayaran gagal, pembayaran tidak sesuai nominal!"<<endl;
 			cout<<"Masukan nominal pembayaran : Rp. ";
 			cin >> pembayaran;
 			cout<<endl;
		}
	} else {
 		cout<<"Kembalian : Rp. "<<pembayaran - (totalMakanan + totalMinuman)<<endl;
	}
	
	cout<<endl<<endl;
	
	cout<<"=============================================="<<endl;
	cout<<"======= Struk Pesanan | Restoran Eiao ========"<<endl;
	cout<<"=============================================="<<endl;
	cout<<"Nama Kostumer : "<<kostumer<<endl;
	cout<<"Alamat Kostumer : "<<alamatKostumer<<endl<<endl;
	if(makanan == 1) {
		detailMakanan = "Nasi Goreng";
	} else if(makanan == 2 ){
		detailMakanan = "Ayam Goreng Kremes";
	} else if(makanan == 3) {
		detailMakanan = "Bakso Tetelan";
	} else if(makanan == 4) {
		detailMakanan = "Tongseng";
	} else if(makanan == 5) {
		detailMakanan = "Soto Ayam";
	}
	cout<<"Makanan : "<< detailMakanan <<" | Porsi : "<<jumlahMakanan<<endl; 
	cout<<"Total harga makanan : Rp. "<<totalMakanan<<endl<<endl;
	if(minuman == 1) {
		detailMinuman = "Es Teh";
	} else if(minuman == 2 ){
		detailMinuman = "Es Jeruk";
	} else if(minuman == 3) {
		detailMinuman = "Jus Buah";
	} else if(minuman == 4) {
		detailMinuman = "Kopi Susu";
	} else if(minuman == 5) {
		detailMinuman = "Wedang Ronde";
	}
	cout<<"Minuman : "<< detailMinuman <<" | Gelas : "<<jumlahMinuman<<endl;
	cout<<"Total harga minuman : Rp. "<<totalMinuman<<endl<<endl;
	
	cout<<"Total harga tagihan : Rp. "<<totalTagihan<<endl;
	cout<<"Total harga pembayaran : Rp. "<<pembayaran<<endl;
	cout<<"Kembalian : Rp. "<< pembayaran - (totalMakanan + totalMinuman)<<endl;
	cout<<"=============================================="<<endl;
	cout<<"========= Terima Kasih | Thank You ==========="<<endl;
	cout<<"=============================================="<<endl;
	
	
	return 0;
}
