#include <stdio.h>
#include <math.h>

#define PI 3.142857 /* Macros, inserted into source code before compilation
Usually used for comments */

float circle_area(float); /* Function definition must be declared beforehand
- Need data type of return value and data type of input */

int main() {
	float radius;
	float area;

	printf("We're going to find the area of a circle.\n");
	printf("Enter the radius of the circle:");
	scanf("%f", &radius); /* scanf requires the address of the variable so that it can store information there */ 

	area = circle_area(radius);
	printf("The area is %f.", area);
	return 0;
}

float circle_area(float radius) {
	float area = PI*pow(radius, 2); 
	return area;
}
	
	
