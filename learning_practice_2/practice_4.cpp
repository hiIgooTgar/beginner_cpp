#include <iostream>
using namespace std;

double valueFourth;

int main() {
	printf("===== Practice Third =====\n\n");
	printf("Enter value Kelvin : ");
	
	scanf("%lf", &valueFourth);
	
	printf("Kelvin value : %lf \n\n",  valueFourth);
	printf("=== Temperature unit | Convert Kelvin ===\n");
	
	double celciusKelvin = valueFourth-273;
	printf("Convert Kelvin to Celcius: ");
	printf("%lf \n", celciusKelvin);
	
	double fahrenheitKelvin = (valueFourth-273)*9/5+32;
	printf("Convert Kelvin to Fahrenheit : ");
	printf("%lf \n", fahrenheitKelvin);
	
	double ReamurKelvin = (valueFourth-273)*4/5;
	printf("Convert Fahrenheit to Reamur : ");
	printf("%lf \n", ReamurKelvin);
	
	return 0;
}
