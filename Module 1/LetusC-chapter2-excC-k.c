/*Given the coordinates (x, y) of a center of a circle and it’s radius,
write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle.
(Hint: Use sqrt( ) and pow( ) functions)
*/


#include<stdio.h>
#include <math.h>
/*
int main()
{
	float x,y;
	float radius;
	float x1,y1;
	
	printf("\nEnter the x,y coords of the center of the circle\n");
	scanf("%f %f", &x,&y);
	
	printf("\nEnter the radius of the circle\n");
	scanf("%f", &radius);
	
	printf("Enter the x1,y1 coords of the point to be found\n");
	scanf("%f %f", &x1,&y1);
	
	//Note if the point distance from the point to the center of the circle is less than the radius
	
	float dx = x1-x;
	float dy = y1-y;
	double dist = sqrt( (dx*dx) + (dy*dy) );
	if(dist < radius)
		printf("The point is inside the circle");
	else if (dist > radius)
		printf("The point is outside the circle");
	else 
		printf("The point is on the circle");
		
		
	
	
	
	return 0;
}
*/
