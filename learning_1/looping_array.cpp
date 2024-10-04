#include <iostream>
using namespace std;

int main () {
	
	int nilai[4];
	
	nilai[0] = 25;
	nilai[1] = 76;
	nilai[2] = 893;
	nilai[3] = 12;
	
	int length = sizeof(nilai) / sizeof(*nilai);
		
	for(int i; i < length; i++) {
		printf("Nilai ke %i \n", nilai[i]);
	}
	
	return 0;
}
