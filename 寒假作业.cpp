#include<stdio.h>

int a[12],n=0,temp;

void put(int);
int check(int,int); 
int main()
{
	int i,j;
	for(i=0 ;i<12;i++)
	{
		a[i] = 0;
	}
	
	put(0);

	printf("%d\n",n);
	return 0;
 } 
 
void put(int k)
{
	if(k >= 12)
	{
		for(int i=0 ; i<12 ; i++)
		{
			printf("%d ",a[i]);
		}
		n++;
		printf("\n");
	}
	else
	{
		for(int j=1 ; j<=13 ; j++)
		{
			if(check(k,j))
			{
				a[k] = j;
				put(k+1);
				a[k] = 0;
			}
		}
	}
}

int check(int k,int j)
{
	for(int i=0;i<k;i++)
	{
		if(a[i] == j)
			return 0;
	}
	if(k==0||k==1||k==3||k==4||k==6||k==7||k==9||k==10)
	{
		return 1;
	}

	if(k == 2)
	{
		if(a[0]+a[1]==j)
			return 1;
		else return 0;
	}
	if(k == 5)
	{
		if(a[3]-a[4]==j)
			return 1;
		else return 0;
	}
	if(k == 8)
	{
		if(a[6]*a[7]==j)
			return 1;
		else return 0;
	}
	if(k == 11)
	{
		if(a[9]/a[10]==j)
			if(a[9]%a[10] == 0)
				
				return 1;
				
			
		return 0;
	}

}
