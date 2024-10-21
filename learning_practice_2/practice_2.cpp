#include <iostream>
using namespace std;

double valueSecond;

int main() {
	printf("===== Practice Second =====\n\n");
	printf("Enter value Reamur : ");
	
	scanf("%lf", &valueSecond);
	
	printf("Reamur value : %lf \n\n",  valueSecond);
	printf("=== Temperature unit | Convert Reamur ===\n");
	
	double celciusReamur = valueSecond*5/4;
	printf("Convert Reamur to Celcius: ");
	printf("%lf \n", celciusReamur);
	
	double fahrenheitReamur = valueSecond*9/4+32;
	printf("Convert Reamur to Fahrenheit : ");
	printf("%lf \n", fahrenheitReamur);
	
	double kelvinReamur = valueSecond*5/4+273;
	printf("Convert Reamur to Kelvin : ");
	printf("%lf \n", kelvinReamur);
	
	return 0;
}
