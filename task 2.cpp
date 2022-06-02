/* The distance between Mirpur and Ashulia is input through the keyboard. Write a program to 
convert and print this distance in meter, feet, inches and centimeters.*/
#include <stdio.h>
int main()
{   
float km,meter,feet,inc,centi;
printf("distance mirpur to ashulia:");
scanf ("%f",&km);
meter=km*1000; //1km=1000meters
	feet=km*3280.8399; //1km=3280.8399 feets
	inc=km*39370.078; //1km=39370.078 inches
	centi=km*100000; //1km=100000 centimeter
printf("%f\n",km);
printf("%f\n ",meter);
printf("%f\n",feet);
printf("%f\n",inc);
printf("%f\n",centi);

return 0;
}

