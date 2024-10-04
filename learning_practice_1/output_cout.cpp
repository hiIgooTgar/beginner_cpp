#include <iostream>
using namespace std;

int main() {
	
	cout<<"Hello Cpp 1"<<endl; // gunanya endl adalah membuat baris baru
	cout<<"Hello Cpp 2 \n"; // selain endl juga bisa menggunakan \n
	cout<<"Hello Cpp 3 \n \n";
	
	string character = "Igo Tegar currently learning Cpp";
	cout<<character;

	return 0;
}

/*
C++ memiliki empat fungsi dasar untuk menampilkan output:

1. cout untuk menampilkan teks ke layar;
2. cerr untuk menampilkan error;
3. clog untuk menampilkan log;
4. printf() untuk menampilkan output, fungsi ini dari C;

Kita akan fokus membahas yang dua saja, yakni cout dan printf().
Soalnya cerr dan clog, cara pakainya sama seperti cout.
Bedanya sih pada konteks penggunaannya, yakni untuk error dan log.

 */
