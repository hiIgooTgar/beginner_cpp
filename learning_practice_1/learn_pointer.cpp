#include <iostream>
using namespace std;

int main() {
	
	int score = 50;
	int hp = 100;
	int *ptr_hp = &hp;
	
	printf("Nama Variabel \t Alamat \t Konten \n");
	printf("Score \t\t %x \t %d \n", &score, score);
	printf("HP \t\t %x \t %d \n", &hp, hp);
	printf("ptr_hp \t\t %x \t %x \n", &ptr_hp, ptr_hp);
	printf("*ptr_hp \t %x \t %d \n", &ptr_hp, *ptr_hp);
	
	//mengubah data pada memori dengan pointer
	
	*ptr_hp = 90;
	
	printf("hp \t\t %x \t %d \n", &hp, hp);
	printf("*ptr_hp \t %x \t %d \n", &ptr_hp, *ptr_hp);
	
	return 0;
}


// *ptr ini akan berisi 95 (nilai dari alamat)
// ptr ini akan berisi d57ba6c (alamat memori dari variabel hp)



/*

Pointer adalah sebuah variabel khusus yang berisi alamat memori. 
Pointer nantinya akan bisa mengakses data yang ada di suatu alamat memori.

“Pointer berisi alamat memori”

Pointer dibuat dengan menambahkan simbol * (asterik) di depan namanya, 
kemudian diisi dengan alamat memori yang akan digunakan sebagai referensi.

*/
