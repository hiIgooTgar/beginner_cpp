#include <iostream>
using namespace std;

double valueThird;

int main() {
	printf("===== Practice Third =====\n\n");
	printf("Enter value Fahrenheit : ");
	
	scanf("%lf", &valueThird);
	
	printf("Fahrenheit value : %lf \n\n",  valueThird);
	printf("=== Temperature unit | Convert Fahrenheit ===\n");
	
	double celciusFahrenheit = (valueThird-32)*5/9;
	printf("Convert Fahrenheit to Celcius: ");
	printf("%lf \n", celciusFahrenheit);
	
	
	double ReamurFahrenheit = (valueThird-32)*4/9;
	printf("Convert Fahrenheit to Reamur : ");
	printf("%lf \n", ReamurFahrenheit);
	
	double kelvinFahrenheit = (valueThird-32)*5/9+273;
	printf("Convert Fahrenheit to Kelvin : ");
	printf("%lf \n", kelvinFahrenheit);
	
	return 0;
}
