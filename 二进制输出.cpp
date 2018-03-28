#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,temp[5],m,k;
		
	for(i = 0;i<32 ; i++)
	{
		k=0;
		j = i;
		for(m = 0 ; m < 5 ; m++)
		{
			temp[m] = 0;
		}
		while(j >= 1)
		{
			temp[k++] = j%2;
			j = j / 2;
		}
		for(m = 4 ; m >= 0 ; m--)
		{
			printf("%d",temp[m]);
		}
		printf("\n");
	}
}
