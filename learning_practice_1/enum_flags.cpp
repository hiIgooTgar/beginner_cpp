#include <iostream>
using namespace std;

int main() {
	
	enum Permission {READ = 1, WRITE = 2, DELETE = 4};
	int balance = 0;
	
	Permission userPermission = Permission(READ | WRITE | DELETE);
	
	if(userPermission & WRITE) {
		cout<<"Anda dibolehkan mengisi saldo ";
		balance += 200;
	}
	
	cout<<"Saldo : "<< balance <<endl;
	
	return 0;
}
