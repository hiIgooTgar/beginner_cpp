
#include <iostream>
using namespace std;
 
int main() {
	
	char grade;
	
	cout<<"Input grade anda : ";
	cin >> grade;

	//Toupper adalah fungsi bawaan dalam C++ yang mengubah string input menjadi huruf kapital.
	//tolower adalah fungsi bawaan dalam C++ yang mengubah string input menjadi huruf kecil semua
	
	switch(toupper(grade)) {
		case 'A' : 
			cout<<"Cumlaude"<<endl;
		break;
		case 'B' :
			cout<<"Pujian"<<endl;
		break;
		case 'C' : 
			cout<<"Sangat Memuaskan"<<endl;
		break;
		case 'D' :
			cout<<"Memuaskan"<<endl;
		break;
		default:
			cout<<"Grade salah!"<<endl;
	}
	
	return 0;
}

