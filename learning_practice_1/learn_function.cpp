#include <iostream>
using namespace std;

//Deklarasi
void hello_cpp();

string looping() {
	int a = 1;
	for(a; a <= 5; a++) {
		printf("Come to study Cpp \n", a);
	}
}


int main () {
	
	hello_cpp();
	looping();

	
	return 0;
}

//Definisi
void hello_cpp() {
	cout<<"Hello Cpp, I'am Igo Tegar Prambudhy"<<endl;
	printf("Now I'am studying CPP");
	printf("I love CPP \n \n");
}

/*
Fungsi/function adalah sub-program yang bisa digunakan kembali baik di dalam program itu sendiri, maupun di program yang lain.
Fungsi/function dapat menerima input dan menghasilkan output.


*/
