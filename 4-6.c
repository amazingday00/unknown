#include<stdio.h>

int main()
{
	float celsiusDegree;
	float fahrenheitDegree;

	printf("Please input fahrenheitDegree:\n");
	scanf("%f",&fahrenheitDegree);
	
	celsiusDegree = 5.0/9.0*(fahrenheitDegree - 32);
			
	printf("The celsius value is %f\n",celsiusDegree);

	return 0;
}
