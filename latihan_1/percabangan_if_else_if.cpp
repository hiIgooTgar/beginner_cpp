#include <iostream>
using namespace std;

int main() {
	
	int nilai;
	string grade;
	
	cout<<"=== Program Grade Nilai ==="<<endl;
	cout<<"Masukkan nilai anda : ";
	cin >> nilai;
	
	if(nilai >= 95 ) {
		grade = "A+";
	} else if(nilai >= 85) {
		grade = "A";
	} else if(nilai >= 80) {
		grade = "B+";
	} else if(nilai >= 75) {
		grade = "B-";
	} else if(nilai >= 72) {
		grade = "C";
	} else {
		grade = "D";
	}
	
	cout<<"Nilai anda : "<< nilai << endl;
	cout<<"Grade anda adalah : "<< grade << endl;
	
	return 0;
}
