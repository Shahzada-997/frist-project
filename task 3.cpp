/*.If the marks obtained by a student in five different subjects are input through the keyboard, 
find out the aggregate marks and percentage marks obtained by the student. Assume that the 
maximum marks that can be obtained by a student in each subject is 100*/
/*#include<stdio.h>
int main()
{
float 1,2,3,4,5,avg,per;
scanf("%f",&1,&2,&3,&4,&5);
avg=1+2+3+4+5;
per=avg*(100/500);
printf("avg=%f\n",avg);
printf(" per=%f\n",per);

	return 0.;
}*/
#include<stdio.h>
int main()
{
	int bangla,english,physics,chemistry,ict,avg;
	float per;
	
	printf(" Enter the subject bangla :");
	scanf("%d",&bangla);
	printf(" Enter the subject english:");
	scanf("%d",&english);
	printf(" Enter the subject physics: ");
	scanf("%d",&physics);
	printf("Enter the subject chemistry:");
	scanf("Enter the subject chemistry;");
	scanf("%d",&chemistry);
	printf("Enter the subject ict:");
	scanf("%d",&ict);
	
	avg=bangla+english+physics+chemistry+ict;
	per= avg*(100.00/500.00);
	
	
	printf(" Avg =%d%d%d%d%d",avg);
	printf(" per=%f",per);	
	
	
	
	return 0;
	
}
