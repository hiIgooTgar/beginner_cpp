#include <iostream>
using namespace std;

int main() {
	
	int weight[] = {50, 53, 57, 62, 61, 58, 52, 52, 54, 49};
	
	int length = sizeof(weight) / sizeof(*weight);
	int sum = 0;
	
	for(int i = 0; i < length; i++) {
		sum += weight[i];
	}
	
	float average = (float)sum / (float)length;
	
	printf("Average weight : %.2f \n", average);
	
	return 0;
}
