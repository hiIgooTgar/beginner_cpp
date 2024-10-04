#include <iostream>
using namespace std;

int main() {
	
	cout<<"=== Program Pembayaran ==="<<endl;
	unsigned int total_belanja;
	
	cout<<"Masukkan total belanja : ";
	cin >> total_belanja;
	
	if(total_belanja > 100000) {
		cout<<"Selamat anda berpeluang mendapatkan 1.000.000 Rupiah!"<<endl;
	}
	
	cout<<"Terima kasih sudah belanja di toko kami!"<<endl;
	
	return 0;
}
