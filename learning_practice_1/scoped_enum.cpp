#include <iostream>
using namespace std;

struct Car {
	int speed;
	enum EngineStatus{ON, OFF};
	enum Direction{FORWARD, BACKWARD};
	Direction direction;
	EngineStatus engineState;
};

//Membuat scoped enum di dalam class
enum class LampColor {RED, YELLOW, GREEN};

int main() {
	
	Car Honda = {
		.speed = 40,
//		.engineState = Car::EngineStatus::ON 
	};
	
	LampColor lampcolor = LampColor::GREEN;
	
	if(lampColor == lampColor::GREEN) {
		honda.direction = Car::Direction::FORWARD;
	}
	
	cout<<"Kecepatan mobil : "<<honda.speed<<endl;
	cout<<"Engine : "<<honda.engineState<<endl;
	cout<<"Direction"<<honda.direction<<endl;
	
	return 0;
}

/*

Unscped enum adalah enum yang cakupannya secara global. 
Artinya, apa yang ada di dalam enum tersebut bisa kita langsung akses.

Scoped Enum* adalah enum yang isinya bisa diakses di dalam scope tertentu.

*/
