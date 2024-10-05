#include <iostream>
using namespace std;

struct Weapon {
	string name;
	int attackPower;
	int range;
};

struct Hero {
	string name;
	int healthPoint;
	Weapon weapon;
};

int main() {

	Hero hero1;
	
	hero1.name = "Gatotkaca";
	hero1.healthPoint = 1000;
	hero1.weapon.name = "Kutang Antakusuma";
	hero1.weapon.attackPower = 150;
	hero1.weapon.range = 80;	
	
	cout<<"Name Heroes : "<<hero1.name<<endl;
	cout<<"Health Point :"<<hero1.healthPoint<<endl;
	cout<<"Weapon Name : "<<hero1.weapon.name<<endl;
	cout<<"Attack Power : "<<hero1.weapon.attackPower<<endl;
	cout<<"Range : "<<hero1.weapon.range<<endl;
	
	cout<<endl;
	cout<<endl;
	
	Hero hero2 {
		.name = "Patih Gajah Mada",
		.healthPoint = 1200,
		.weapon = {
			.name = "Gada",
			.attackPower = 650,
			.range = 110,
		}
	};
	
	printf("Name : %s \n", hero2.name.c_str());
	printf("Health Point : %i \n", hero2.healthPoint);
	printf("Weapon Name : %s \n", hero2.weapon.name.c_str());
	printf("Attack Power : %i \n", hero2.weapon.attackPower);
	printf("Range : %i \n", hero2.weapon.range);

	return 0;
}
