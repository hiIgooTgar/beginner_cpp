#include <iostream>
using namespace std;

void introduction(string nama, string nim, string prodi, string fakultas, string alamat) {
	cout<<"== Data Student =="<<endl;
	cout<<"Name : "<<nama<<endl;
	cout<<"NIM : "<<nim<<endl;
	printf("Program Study : %s \n", prodi.c_str());
	printf("Faculty : %s \n", fakultas.c_str());
	printf("Address:  %s \n", alamat.c_str());
}

void learning(string lesson);
void programming(string language);

int main() {
	introduction("Igo Tegar Prambudhy", "24SA11A159", "Informatics", "Computer Science", "Indonesian");
	cout<<endl<<endl;
	programming("C++, C, C#, Java, Python, Javascript, PHP");
	cout<<endl<<endl;
	learning("Software Engineering, Systrem Basis Data, Algorithm and Structure Data, Artificial Intelligence");
	
	return 0;
}

void programming(string language) {
	printf("== Programming ==\n");
	cout<<"Language : "<<language<<endl;
}

void learning(string lesson) {
	printf("== Learning Informatic ==\n");
	printf("Lesson : %s \n", lesson.c_str());
}
