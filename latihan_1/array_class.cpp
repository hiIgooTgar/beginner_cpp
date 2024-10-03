#include <iostream>
#include <array>
using namespace std;

int main() {
	
	array<string, 5> name = {"Java", "C", "C#", "Cpp", "Python"};
	
	printf("As many array is %d : \n", name.size());
	
	for(int a = 0; a < name.size(); a++) {
		cout<< a << ". "<< name[i]<<endl;
	}
	
	return 0;
}
