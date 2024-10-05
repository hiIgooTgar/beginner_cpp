#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

struct Player {
	string name;
	int healthPoint;
	
	Player() {
		cout<<"Object yang dibuat!"<<endl;
	}
	
	~Player() {
		cout<<"Object yang dimusnahkan!"<<endl;
	}
	
	void showPlayerStatus() {
		cout<<"=== Player Status ==="<<endl;
		cout<<"Name : "<< name <<endl;
		cout<<"Health Point : "<< healthPoint<<endl;
		cout<<endl<<endl;
	}
};

int main() {
	Player p1;
	p1.name = "Player 1";
	p1.healthPoint = 1000;
	
	Player p2;
	p2.name = "Player 2";
	p2.healthPoint = 1000;
	
	Player p3;
	p3.name = "Player 3";
	p3.healthPoint = 1000;
	
//	Player p2 = {"User 2", 1000};
//	Player p3 =  {
//		.name = "Player 3",
//		.healthPoint = 1000
//	};


	p1.showPlayerStatus();
	p2.showPlayerStatus();
	p3.showPlayerStatus();
	
	return 0;
}

/*

Nah, bedanya Struct dengan class terletak pada hak akses membernya. 
Kalau Struct secara default bisa diakses secara publik. Sementara class, 
membernya bisa kita set public, private, dan protected.


Fungsi Constructor dan Destructor di Struct
Fungsi Constructor adalah fungsi yang akan dipanggil saat pembuatan object atau variabel dari struct. 
Sedangkan Destructor akan dipanggil saat variabel atau object tersebut dihapus.

Cara menambahkan fungsi constructor dan destructor di Struct sama seperti menambahkan fungsi biasa. 
Tapi tanpa return type dan nama fungsinya harus sama dengan nama Struct. 
Untuk fungsi destructor, namanya harus ditambahkan ~ di depan.



*/
