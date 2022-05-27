#include<stdio.h>
int main()
{
	double gpa,ielts_score;
	
	
	printf("Enter your gpa:");
	scanf("%lf",&gpa);
	printf("Enter yhour ielts score:");
	scanf("%lf",&ielts_score);
	
	if(gpa==5.00 || ielts_score>=7.00){
		
		printf(" You get Canadian Scholarship");
	}
	else{
		
		printf("Sorry,No Scholarship");
	}
	
	return 0;
	
}
