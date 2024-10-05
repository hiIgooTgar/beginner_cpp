#include <iostream>
using namespace std;

struct Player {
	string name;
	int healthPoint;
	
	void showPlayerStatus() {
		cout<<"=== Player Status ==="<<endl;
		cout<<"Name "<< name<<endl;
		cout<<"Health Point : "<< healthPoint<<endl;
		cout<<endl << endl;
	}
};

int main() {
	
	Player p1 = {
		.name = "User 1",
		.healthPoint = 1000
	};
	
	Player p2 = {"User 2", 1000};
	
	Player p3;
	p3.name = "User 3";
	p3.healthPoint = 1000;
	
	p1.showPlayerStatus();
	p2.showPlayerStatus();
	p3.showPlayerStatus();
	
	return 0;
}
