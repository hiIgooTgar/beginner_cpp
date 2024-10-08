#include <iostream>
using namespace std;

int main () {
	
	struct Weapon {
		string name;
		int attack;
		int guard;
	};
	
	struct Player {
		string name;
		int hp;
		int score;
		Weapon *weapon;
	};
	
	Player player1;
	Player *p1 = &player1;
	
	p1->name = "Gatokaca";
	p1->score = 0;
	p1->hp = 1000;
	p1->weapon = new Weapon;
	
	p1->weapon->name = "Brajamusti";
	p1->weapon->attack = 100;
	p1->weapon->guard = 50;
	
	printf("=== Player Status ===\n");
	printf("Name : %s \n", p1->name.c_str());
	printf("Score : %i \n", p1->score);
	printf("Health Point : %i \n \n", p1->hp);
	printf("=== Use Weapon ===\n");
	printf("Name : %s \n", p1->weapon->name.c_str());
	printf("Attack : %i \n", p1->weapon->attack);
	printf("Guard : %i \n", p1->weapon->guard);
	
	return 0;
}
