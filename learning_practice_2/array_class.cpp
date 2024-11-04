#include <iostream>
#include <array>
using namespace std;

int main() {
	array<string, 5> name = {"C++", "C", "Javascript", "Python", "PHP"};
	
	printf("As many array id %i : \n", name.size());
	
	for(int a = 0; a < name.size(); a++) {
		cout<<". "<< name[a]<<endl;
	}
	
	return 0;
}
