#include <iostream>
using namespace std;

int main() {
	
	string username, password;
	
	cout<<"=== Login CPP ==="<<endl;
	cout<<"Masukkan username : ";
	cin>>username;
	
	cout<<"Masukkan password : ";
	cin>>password;
	
	if(username == "belajar") {
		if(password == "cpp") {
			cout<<"Selamat datang CPP!"<<endl;
		} else {
			cout<<"Passwod anda salah, coba cek lagi!"<<endl;
		}
	} else {
		cout<<"Username anda tidak terdaftar!"<<endl;
	}
	
	return 0;
}
