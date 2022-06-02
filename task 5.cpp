/*The length & breadth of a rectangle and radius of a circle are input through the keyboard. 
Write a program to calculate the area & perimeter of the rectangle, and the area & circumference 
of the circle*/
#include<stdio.h>
#define pi 3.1416
int main ()
{
	double length, breadth, radius,area_rectangle,perimeter_rectangle,area_circle,ci_circle;
printf(" Enter the length,breadth,radius :");
scanf("%lf%lf%lf", &length,&breadth,&radius);
area_rectangle=length*breadth;
perimeter_rectangle=2*(length+breadth);

area_circle= pi*radius*radius;
ci_circle=2*pi*radius;
 printf("%lf\n%lf\n%lf\n%lf\n",area_rectangle,perimeter_rectangle,area_circle, ci_circle);

	
	
	
	
	return 0;
}

