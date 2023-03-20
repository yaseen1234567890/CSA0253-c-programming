
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter your age:");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("%d is eligible for voting",a);
	}
	else
	{
		printf("%d is not eligible for voting \n%d  year is left you to become eligible for voting",a,18-a);
		
	}
}
