#include<stdio.h>
int main()
{
	double marks;
	
	printf("Enter marks in Programming Lab :");
	scanf("%lf",&marks);
	
	
	if(marks>=80 && marks<=100)
	{
		printf("Gain:A+");
		
	}
	else if(marks>=75 && marks<=79)
	{
		printf("Gain:A");
		
	}
	else if(marks>=70 && marks<=74)
	{
		printf("Gain:A-");
		
	}
	else if(marks>=65 && marks<=69)
	{
		printf("Gain:B+");
		
	}
	else if(marks>=60 && marks<=64)
	{
		printf("Gain:B");
		
	}
	else if(marks>=55 && marks<=59)
	{
		printf("Gain:B-");
		
	}
	else if(marks>=50 && marks<=54)
	{
		printf("Gain:C+");
		
	}
	else if(marks>=45 && marks<=49)
	{
		printf("Gain:C");
		
	}
	else if(marks>=40 && marks<=44)
	{
		printf("Gain:C-");
		
	}
	else{
		
		printf("Result is:Fail");
	}
	
	
	
	return 0;
}
