#include <iostream>
using namespace std;

int main() {
	
	string name;
	string studying;
	string faculty; 
	int age;
	char gender;
	
	cout<<"===== Introducation ====="<<endl;
	cout<<endl;
	cout<<"What's your name : "<<endl;
	cout<<"Answer : ";
	getline(cin, name);
	
	// Khusus untuk tipe data string, kita menggunakan fungsi getline() untuk mengambil satu baris nilai yang diinputkan.
	
	cout<<"From which program study :  "<<endl;
	cout<<"Answer : ";
	cin >> studying;
	
	cout<<"From which faculty : "<<endl;
	cout<<"Answer : ";
	cin >> faculty;
	
	cout<<"How old are you : "<<endl;
	cout<<"Answer : ";
	cin >> age;
	
	cout<<"What is your gender [M for Male |F for Female] : "<<endl;
	cout<<"Answer : ";
	cin >> gender;
	
	
	cout<<"Hello Cpp , "<<"My name is "<<name<<". From which program study "<<studying<<" Faculty "<<faculty
	<<" , Now I'am "<<age<< " Years old ";
	cout<<" and my gender "<<gender;

	return 0;
}




/*


Nama 						Tipe Data 		Ukuran dalam Memori	Rentang Nilai
char						1byte			-127 sampai 127 atau 0 sampai 255
unsigned char				1byte			0 sampai 255
signed char					1byte			-127 sampai 127
int							4bytes			-2147483648 sampai 2147483647
unsigned int				4bytes			0 sampai 4294967295
signed int					4bytes			-2147483648 sampai 2147483647
short int					2bytes			-32768 sampai 32767
unsigned short int 			Range			0 sampai 65,535
signed short int	 		Range			-32768 sampai 32767
long int					4bytes			-2,147,483,648 sampai 2,147,483,647
signed long int				4bytes			same as long int
unsigned long int			4bytes			0 sampai 4,294,967,295
float						4bytes			+/- 3.4e +/- 38 (~7 digits)
double						8bytes			+/- 1.7e +/- 308 (~15 digits)
long double					8bytes			+/- 1.7e +/- 308 (~15 digits)
wchar_t						2 or 4 bytes	1 wide character
boolean						4bytes			true atau false


 */
