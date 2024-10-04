#include <iostream>
using namespace std;

enum Role {USER, ADMIN};

int main() {
	
	string name = "cppbest";
	Role user_role = USER; //ADMIN
	
	if(user_role == ADMIN) {
		cout<<"Welcome Admin"<<endl;
	} else {
		cout<<"Hello "<<name<<endl;
	}
	
	return 0;
}

//Enum atau Enumeration merupakan tipe data yang berisi sekumpulan konstanta.

//Flags ini bisa diartikan sebagai penanda atau marker.
