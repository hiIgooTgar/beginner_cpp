#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	int a;
	int b;
	
	printf("===== Operator Aritmatika =====\n\n");
	printf("Nilai Pertama : ");
	scanf("%i", &a);
	printf("Nilai Kedua : ");
	scanf("%i", &b);
	
	cout<<endl;
	1
	if(a % 2 == 0) {
		cout<<a << " adalah bilangan genap"<<endl;
	} else {
		cout<<a << " adalah bilangan ganjil"<<endl;
	}
		
	if(b % 2 == 0) {
		cout<<b << " adalah bilangan genap"<<endl;
	} else {
		cout<<b << " adalah bilangan ganjil"<<endl;
	}
	cout<<endl;
	
	cout<<"Penjumlahan dari "<<a<<" + " << b << " Maka hasilnya " << a + b<<endl;
	printf("Pengurangan dari %i - %d Maka hasilnya %i \n", a , b, a - b);
	cout<<"Perkalian dari "<<a<<" * "<<b<<" Maka hasilnya "<<a * b<<endl;
	printf("Pembagian dari %i / %i Maka hasiknya %d \n",a ,b , a / b);
	cout<<"Modulus Sisa bagi dari "<<a<<" % "<<b<<" Maka hasilnya "<<a % b<<endl;
	
	cout<<endl;
	printf("========= End ========== \n");

	
	return 0;
}
