#include<stdio.h>
int main()
{
	double cgpa,ielts_score;
	
	printf("Enter yourcgpa:");
	scanf("%lf",&cgpa);
	printf("Enter youe ielts score:");
	scanf("%lf",&ielts_score);
	
	if(cgpa>=3.75)
	{
		if(ielts_score>=7.0){
			
			printf("You got the scholarship");
			
		}
		
		
	}
	else{
		
			printf("You are Rejected");
	}
	
	return 0;
}
