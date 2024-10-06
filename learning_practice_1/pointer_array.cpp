#include <iostream>
using namespace std;

int main() {
	
	printf("=== Program Cpp | Antrian CS === \n");
	char no_antrian[5]= {'A', 'B', 'C', 'D', 'E'};
	
	char *ptr_current = no_antrian;
	
	for(int a = 0; a < 5; a++) {
		printf("Pelanggan dengan Nomor Antrian %c silakan ke loket! \n", *ptr_current);
		printf("Saat ini CS sedang melayani : %c\n", *ptr_current);
		printf("---- Tekan Enter untuk NEXT ---- \n");
		getchar();
		ptr_current++;
	}
	
	printf("SELESAI");
	
	return 0;
}
