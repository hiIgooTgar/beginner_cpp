#include <iostream>
using namespace std;

void add_score(int *score) {
	*score = *score + 5;
	printf("Score yang diubah ke %d \n", *score);
}

int main() {
	
	int score = 0;
	printf("Score yang sebelum diubah : %i \n", score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	printf("Score yang setelah diubah : %i \n", score);
	
	return 0;
}
