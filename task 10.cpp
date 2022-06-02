/*10. In a town, the percentage of men is 52. The percentage of total literacy is 48. If total 
percentage of literate men is 35 of the total population, write a program to find the total number 
of illiterate men and women if the population of the town is 80,000*/

#include<stdio.h>
int main()
{
	
	double men_pop,woman_pop,total_lit,men_lit,ill_man,ill_woman;
	
	double pop= 80000;
	
	men_pop=pop*.52;
	woman_pop= pop-men_pop;
	total_lit= pop*.48;
	men_lit= pop*.35;
	ill_man=  men_pop-men_lit; //illeterate_man=	man_population-man_literacy;
	ill_woman=woman_pop-(total_lit-men_lit);
	
	printf(" illman=%.2lf\n illwoman=%.2lf\n" ,ill_man,ill_woman);
	
	
	
	
	return 0;
}
