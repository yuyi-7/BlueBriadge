#include<stdio.h>

int main()
{
	int i,temp,num=1,a[101];
	a[1] = 1;
	for(i=2;i<=100;i++)
	{
		a[i] = a[i-1] + i;
		temp = a[i];
		num = num + temp;
//		printf("%d\n",temp);
	}
	printf("%d",num);
	return 0;
}
