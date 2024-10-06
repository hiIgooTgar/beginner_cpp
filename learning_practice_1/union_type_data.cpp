#include <iostream>
using namespace std;

struct Notification {
	enum { 
		EMAIL, SMS
	} type;
	string title;
	string message;
	union {
		char* phone_number;
		char* email_address;
	};
};

int main() {
	
	Notification sms = {
		.type = Notification::SMS,
		.title = "Graduation",
		.message = "Congratulations on Your Graduation",
		.phone_number = "0896374637624"
	};
	
	Notification email = {
	.type = Notification::EMAIL,
	.title = "Welcome",
	.message = "Welcome to my website",
	.email_address = "igo@gmail.com"
	};
	
	cout<<"=== Notification SMS === \n";
	cout<<"To : "<<sms.phone_number<<endl;
	cout<<"Message : "<<sms.message<<endl;
	
	cout<<endl;
	
	cout<<"=== Notification Email === \n";
	cout<<"Subject : "<<email.title<<endl;
	cout<<"To : "<<email.email_address<<endl;
	cout<<"Message : "<<email.message<<endl;
	
	return 0;
}

/*

Union adalah tipe data yang berisi sekumpulan variabel yang dibungkus jadi satu dan memiliki alamat memori yang sama.

*/
