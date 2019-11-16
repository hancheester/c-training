#include<stdio.h>

int main()
{
	float celcius, fahrenheit, kelvin;

	celcius = 21;
	fahrenheit = celcius * 9 / 5 + 32;
	kelvin = celcius + 273.15f;

	printf("%f C = %f F = %f K\n",
			celcius,
			fahrenheit,
			kelvin);

	return 0;	
}
