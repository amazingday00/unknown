#include<stdio.h>

int main()
{
	float vehicleSpeed = 40;
	float vehicleTime = 1.5;
	float drvingDistance;
	
	drvingDistance = vehicleSpeed * vehicleTime;

	printf("The distance between company and home is %f Km\n",drvingDistance);
	
	return 0;
}
