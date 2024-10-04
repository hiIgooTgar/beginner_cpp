#include <iostream>
using namespace std;

int a = 10;
string name = "Igo Tegar";
bool test = false;
string gender = "Male";
string language[] = {"English", "Bahasa", "Javanese", "Japanese", "Mandarin", "Tagalog", "Portugis", "Franch"};
int length = sizeof(language) / sizeof(language[0]);


void languageLooping() {
	for(int a = 0; a < length; a++) {
		printf("%i %s \n", a, language[a].c_str());	
	}
}


int main() {
	
	int a = 20;
	string name = "Prambudhy";
	
	printf("%i \n", a);
	printf("%s \n", name.c_str());
	cout<<name<<endl;
	printf("%i \n", test);
	printf("%s \n", gender.c_str());
	languageLooping();
	cout<<language[5];
	
	return 0;
}

/*

Variabel global adalah variabel yang bisa diakses dari semua fungsi. 
Sedangkan variabel lokal adalah variabel yang hanya bisa diakses dari dalam fungsi itu sendiri.

*/
