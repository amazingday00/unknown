/*********************************
计算圆柱体底周长，面积和体积
*********************************/

#include<stdio.h>
#define pi 3.1415926

int main()
{
	float radius;
	float height;
	float bottomPerimeter;
	float bottomArea;
	float cylinderVolume;	

	printf("Please input radius and height value:\n");
	scanf("%f %f",&radius,&height);	
	
	bottomPerimeter = 2 * pi * radius;
	bottomArea = pi * radius * radius;
	cylinderVolume = bottomArea * height;

	printf("The Perimeter of bottom is:%f\n",bottomPerimeter);	
	printf("The Area of bottom is:%f\n",bottomArea);
	printf("The Volume of Cylinder is:%f\n",cylinderVolume);				
	
	
	return 0;
}

