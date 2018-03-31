#include<stdio.h>

double a[9];
int num=0,deep;

void put(int);
int check(int ,int);
 
int main()
{
	int i,j;
	for(i=0;i<9;i++)
	{
		a[i] =0.0;		
	}
	printf("¿ªÊ¼¼ÆËã\n");
	put(0);
	printf("%d",num);

	return 0;	
}

void put(int deep)
{
	int i,k;
	if(deep>=9)
	{
		printf("%1.0f+%1.0f/%1.0f+%1.0f%1.0f%1.0f/%1.0f%1.0f%1.0f\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
		num ++ ;
	}
	else
	{
		for(i=1;i<=9;i++)
		{
			if(check(i,deep))
			{
				a[deep] = (double)i;
				put(deep+1);
				a[deep] = 0.0;
			}
		}
	}
}

int check(int i,int deep)
{
	int j;
	double temp1,temp2;
	for(j=0;j<deep;j++)
	{
		if(a[j] == i)
		{
			return 0;
		}
	}
	if(deep == 8)
	{
		temp1 = a[1]/a[2];
		temp2 = (double)(a[3]*100+a[4]*10+a[5])/(a[6]*100+a[7]*10+a[8]);
		
		if(a[0] + temp1 + temp2 == 10.00)
		{	
		//	printf("%f,%f,%f\n",a[0],temp1,temp2);
			return 1;
		
		}
		else return 0;
	}
	else return 1;
	
}



