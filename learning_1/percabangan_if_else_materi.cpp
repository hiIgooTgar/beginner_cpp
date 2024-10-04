#include <iostream>
using namespace std;

int main() {
	
	string password;
	
	cout<<"===== Login ====="<<endl;
	cout<<"Masukkan password : ";
	getline(cin, password);
	//cin >> password;
	
	if(password == "cpp") {
		cout<<"Selamat datang di cpp!"<<endl;
	} else {
		cout<<"Password anda salah, mohon coba lagi!"<<endl;
	}
	
	cout<<"Terima kasih sudah menggunakan aplikasi kami"<<endl;
	
	
	return 0;
}
