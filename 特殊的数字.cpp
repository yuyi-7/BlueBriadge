#include<stdio.h>

int main()
{
	int i,j,temp,sum;
	for(i=100 ; i<999 ; i++)
	{
		temp = i;
		sum = 0;
		while(temp)
		{
			j = temp%10;
			sum = sum + j*j*j;
			temp = temp/10;
		}
		if(sum == i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
