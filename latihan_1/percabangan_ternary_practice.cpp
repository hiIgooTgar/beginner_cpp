#include <iostream>
#include <cstdlib>
#include <cstdlib>

using namespace std;

int main() {
	
	int jawaban;
	unsigned int a = rand() % 101;
	unsigned int b = rand() % 101;
	string hasil;
	
	cout<<"Penjumlahan dari "<< a << " + "<< b <<" adalah ";
	cin >> jawaban;
	
	hasil = jawaban == (a + b) ? "Ya anda benar" : "Yah salah, anda harus belajar lagi";
	cout<<hasil<<endl;
	
	return 0;
}
