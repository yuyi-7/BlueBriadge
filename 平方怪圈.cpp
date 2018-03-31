#include<stdio.h>

int a[10000],max;
void init();
int Max();

int main()
{
	init();
	int i,j=0,k,num;;
	for(i=0;i<10000;i++)
	{
		a[0]=22;
		num = 0;
		k = a[j];
		while(k)
		{
			num = num + (k%10)*(k%10);
			k = k/10;
		}
		a[++j] = num;
	}
	printf("%d",Max());
	return 0;

}

void init()
{
	int i,j;
	for(i=0;i<10000;i++)
		a[i]=0;
}

int Max()
{
	max = 0;
	int i;
	for(i=0;i<10000;i++)
	if(a[i] > a[max])
	{
		max=i;
	}
	return a[max];
}
