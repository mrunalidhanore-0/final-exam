#include<stdio.h>
#include<conio.h>
// odd number?
 main()
{
	int a,b,c,d;
	
	printf("enter a");
	scanf("%d",&a);
	
	printf("enter b");
	scanf("%d",&b);
	
	printf("enter c");
	scanf("%d",&c);
	
	printf("enter d");
	scanf("%d",&d);
	
	
	if(a<b)
	{
		printf("a is a odd num");
		
		if(a<c)
		{
			printf("c is a even num");
		}
		else
		{
			printf("b is a odd num");
		}
	}
	else
	{
		printf("d is a odd num");
	}
		
}
