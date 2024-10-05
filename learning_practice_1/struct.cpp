#include <iostream>
using namespace std;

struct Mahasiswa {
	string name;
	string address;
	int age;
};

int main() {
	
	Mahasiswa mhs1;
	
	mhs1.name = "Igo Tegar";
	mhs1.address = "Purbalingga";
	mhs1.age = 18;
	
	Mahasiswa mhs2 = {"Prambudhy", "Banyumas", 18};
	
	cout<<"=== Mahasiswa 1 ==="<<endl;
	cout<<"Name : "<<mhs1.name<<endl;
	cout<<"Address : "<<mhs1.address<<endl;
	cout<<"Age : "<<mhs1.age<<endl;
	cout<<endl;
	
	cout<<"=== Mahasiswa 2 ==="<<endl;
	cout<<"Name : "<<mhs2.name<<endl;
	cout<<"Address : "<<mhs2.address<<endl;
	cout<<"Age : "<<mhs2.age<<endl;
	
	return 0;
}

/*

Structure atau struct adalah kumpulan dari beberapa variabel dengan beragam tipe data yang dibungkus dalam satu variabel.

*/
