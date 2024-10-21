#include <iostream>
using namespace std;

double value;

int main() {
	printf("===== Practice First =====\n\n");
	printf("Enter value Celcius : ");
	
	scanf("%lf", &value);
	
	printf("Celcius value : %lf \n\n",  value);
	printf("=== Temperature unit | Convert Celcius ===\n");
	
	double fahrenheit = value*9/5+32;
	printf("Convert Celcius to Fahrenheit : ");
	printf("%lf \n", fahrenheit);
	
	double reamur = value*4/5;
	printf("Convert Celcius to Reamur : ");
	printf("%lf \n", reamur);
	
	double kelvin = 275.15 + value;
	printf("Convert Celcius to Kelvin : ");
	printf("%lf \n", kelvin);
	
	return 0;
}
