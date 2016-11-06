#include<stdio.h>

int main()
{
	float tank_volume = 0.1;
	float oil_density = 850;
	float area;
	float oil_kg;

	oil_kg = tank_volume*oil_density;
	area = oil_kg / 0.85;
	printf("Most farming area is %f mu\n",area);	

	return 0;
}
