#include <iostream>
using namespace std;

int main() {
	
	int jawaban;
	string hasil;
	
	cout<<"Penjumlahan dari 10 + 21 adalah ";
	cin >> jawaban;
	
	hasil = (jawaban == 31) ? "Ya anda benar jawabanya 31" : "Yah salah, anda harus belajar lagi";
	cout<<hasil<<endl;
	
	return 0;
}
