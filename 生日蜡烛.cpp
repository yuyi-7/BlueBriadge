#include<stdio.h>

int main()
{
	int num,i,j;
	for(i=0;i<100;i++)
	{
		num = 0;
		for(j = i;j < 100; j++)
		{
			num = num + j; 
			if(num == 236)
			{
				printf("%d,%d",i,j);
				break;
			}
		}
	}
}
