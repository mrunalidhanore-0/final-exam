#include<stdio.h>
#include<conio.h>

 main()
{
	int a,b,c;
	
	for(a=75; a<=79; a++)
	{
		for(c=75; c<=a; c++)
		{
			printf("");
		}
		for(b=a; b<=79; b++)
		{
			printf("%d ", b);
		}
			printf("\n");
	}
}

