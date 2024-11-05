#include <iostream>
using namespace std;

int main() {
	
	int triangle;
	cout<<"Masukkan value anda : ";
	cin >> triangle;
	
	cout<<"Value anda : "<<triangle<<endl<<endl; 
	
	for(int a = 0; a <= triangle; a++) {
		for(int b = 0; b <= a; b++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	
	for(int a = triangle; a >= 0; a--) {
		for(int b = 0; b <= a; b++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}
