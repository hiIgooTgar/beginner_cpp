#include <iostream>
using namespace std;

int main() {
	char name[11], web_address[20];
	
	printf("What's your name : ");
	scanf("%[^\n]s", &name);
	
	printf("URL Address : ");
	scanf("%s", &web_address);
	
	cout<<endl;
	
	printf("My name is %s\n", name);
	printf("My URL address is %s\n", web_address);
	
	return 0;
}

/* IIg
Fungsi scanf() adalah fungsi untuk mengambil input dari keyboard. Fungsi ini memiliki format seperti fungsi printf().
*/
