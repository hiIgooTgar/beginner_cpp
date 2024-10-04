#include <iostream>
using namespace std;

void hello_cpp(string name) {
	cout<< "My name is "<< name <<endl;
}

void summation(int a, int b) {
	printf("%i + %i =  %i \n", a, b, a+b);
}

void subtraction(int a, int b) {
	cout<<a<<" - "<<b<<" = "<<a - b<<endl;
}

void multiplication(int a, int b) {
	printf("%i * %i = %i \n", a, b, a*b);
}

void distribution(int a, int b) {
	cout<<a<<" / "<<b<< " = "<<a/b<<endl;
}

float v_return(int a, int b) {
	float result = (float)a / (float)b;
	return result;
}

int main () {
	
	hello_cpp("Igo Tegar");
	hello_cpp("Wazlen");
	hello_cpp("Friska");
	
	summation(20,29);
	multiplication(7, 8);
	subtraction(30, 19);
	distribution(40, 5);
	
	printf("Hasil dari 10/3 %.2f \n ", v_return(10, 3));
	cout<<"Hasil dari 1-/6 "<<v_return(10, 6)<<endl;
	
	return 0;
}
