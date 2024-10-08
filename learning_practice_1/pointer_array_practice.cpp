#include <iostream>
using namespace std;

int main() {
	
	struct Weapon {
		string name;
		int attack;
		int guard;
	};
	
	struct Player {
		string name;
		int score;
		int hp;
		Weapon *weapon;
	};
	
	Player player1;
	player1.name = "Patih Gadjah Mada";
	player1.score = 0;
	player1.hp = 1000;
	player1.weapon = new Weapon;
	
	(*player1.weapon).name = "Gada";
	(*player1.weapon).attack = 50;
	(*player1.weapon).guard = 20;
	
	cout<<"=== Player Status === \n";
	cout<<"Name : "<<player1.name<<endl;
	cout<<"Health Point : "<<player1.hp<<endl;
	cout<<"Score : "<<player1.score<<endl<<endl;
	cout<<"=== Weapon ===\n";
	cout<<"Name : "<<(*player1.weapon).name<<endl;
	cout<<"Attack : "<<(*player1.weapon).attack<<endl;
	cout<<"Guard : "<<(*player1.weapon).guard<<endl;
	
	return 0;
}
