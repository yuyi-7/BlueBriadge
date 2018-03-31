#include<stdio.h>

int main()
{
	int a[4],i;
	int mid,side;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	mid = (a[2]-a[1]-1)/4;
	side = (a[0]-1)/2;
	printf("%d",(mid+side+1)*4);
	return 0;
}
