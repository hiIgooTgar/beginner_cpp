#include <iostream>
using namespace std;

int main() {
	int value1, value2;
	
	cout<<"=== Operators | CPP ==="<<endl;
	cout<<"Masukkan nilai 1 : ";
	cin >> value1;
	cout<<"Masukkan nilai 2 : ";
	cin >> value2;
	
	cout<<endl;
	cout<<"Nilai 1 : "<<value1<<endl;
	cout<<"Nilai 2 : "<<value2<<endl<<endl;
	
	cout<<"Operator Aritmatika"<<endl;
	cout<<"Pertambahan : "<<value1<<" + "<<value2<<" = "<<value1 + value2<<endl;
	cout<<"Pengurangan : "<<value1<<" - "<<value2<<" = "<<value1 - value2<<endl;
	cout<<"Perkalian : "<<value1<<" * "<<value2<<" = "<<value1 * value2<<endl;
	cout<<"Pembagian : "<<value1<<" / "<<value2<<" = "<<value1 / value2<<endl;
	cout<<"Modulus/Sisa bagi : "<<value1<<" % "<<value2<<" = "<<value1 % value2<<endl<<endl;
	
	cout<<"Operator Relasi"<<endl;
	cout<<value1<<" > "<<value2<<" = "<<(value1 > value2)<<endl;
	cout<<value1<<" < "<<value2<<" = "<<(value1 < value2)<<endl;
	cout<<value1<<" >= "<<value2<<" = "<<(value1 >= value2)<<endl;
	cout<<value1<<" <= "<<value2<<" = "<<(value1 <= value2)<<endl;
	cout<<value1<<" == "<<value2<<" = "<<(value1 == value2)<<endl;
	cout<<value1<<" != "<<value2<<" = "<<(value1 != value2)<<endl<<endl;
	
	cout<<"Operator Bitwise"<<endl;
	cout<<value1<<" & "<<value2<<" = "<<(value1 & value2)<<endl;
	cout<<value1<<" | "<<value2<<" = "<<(value1 | value2)<<endl;
	cout<<value1<<" ^ "<<value2<<" = "<<(value1 ^ value2)<<endl;
	cout<<"~"<<value1<<" = "<<(~value1)<<endl;
	cout<<value1<<" >> "<<value2<<" = "<<(value1 >> value2)<<endl;
	cout<<value1<<" << "<<value2<<" = "<<(value1 << value2)<<endl<<endl;
	
	cout<<"Operator Unary"<<endl;
	cout<<value1<<"++ : "<<value1++<<endl;
	cout<<value2<<"-- : "<<value2--<<endl; 
	
	return 0;
}
