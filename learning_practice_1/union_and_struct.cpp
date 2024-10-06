#include <iostream>
#include <stdio.h>

using namespace std;

struct Player {
	string name;
	unsigned int level;
};

union Enemy {
	char* name;
	unsigned int healthPoint;
};

int main() {
	
	Player player1 = {
		.name = "Kratos",
		.level = 10
	};
	
	printf("Player : %d (address = %x) \n", sizeof(player1), &player1);
	printf(" - Name : %d (address = %x) \n", sizeof(player1.name), &player1.name);
	printf(" - Level : %d (address = %x) \n", sizeof(player1.level), &player1.level);
	
	union Enemy zombie;
	zombie.name = "Zombie";
	zombie.healthPoint = 1000;
	
	printf("Enemy : %d (adderss = %x) \n", sizeof(zombie), &zombie);
	printf(" - Name : %d (address = %x) \n", sizeof(zombie.name), &zombie.name);
	printf(" - Healt Point : %d (address = %x) \n", sizeof(zombie.healthPoint), &zombie.healthPoint);
	
	return 0;
}


/*

Perbedaan Union dengan Struct
Union sebenarnya sama seperti tipe data Struct. Namun, berbeda dalam metode alokasi memorinya.

Struct mengalokasikan memori untuk setiap membernya pada alamat memori yang berbeda-beda.

Sedangkan Union mengalokasikan memori di satu alamat memori dengan ukuran diambil dari ukuran member yang paling besar.

*/
