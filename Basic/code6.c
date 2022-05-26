#include<stdio.h>
int main()
{
	float m,n,addition,substraction,multiply,division;
    printf("Enter a float number:");
	scanf("%f",&m);
	printf("Enter a float number:");
	scanf("%f",&n);
	addition=m+n;
	substraction=m-n;
	multiply=m*n;
	division=m/n;


	printf("Addition:%.2f\n",addition);
	printf("Substraction:%.2f\n",substraction);
	printf("Multiply:%.2f\n",multiply);
	printf("Division:%.2f\n",division);


    return 0;

}
