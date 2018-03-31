#include <iostream>
#include<stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int n=0,a[10];
void put(int);
int check(int,int);
int xl(int,int);

int main(int argc, char** argv)
{
	int i,j;
	for(i=0;i<10;i++)
	{
		a[i] = 0;
	}
	put(0);
	printf("%d",n);
	return 0; 
}

void put(int k)
{
	
		for(int i=0;i<10;i++)
		{
	/*		if(i == 0)
			{
				getchar();
			} */
	//		printf("%d\n",i); 
			if(check(k,i)==1)
			{
				
				a[k] = i;
			/*	for(int j=0;j<k;j++)
					printf("a[%d]=%d ",j,a[j]); */
				if(k >= 9)
				{
				 
					for(int j=0;j<10;j++)
					printf("%d",a[j]);
					n++;
					printf("\n");
				}
				else
				{
				//	printf("进入下一位\n");
					put(k+1);
				} 
				a[k] = 0;
			}
		}
	
}

int check(int k,int j)
{
	int i;
	for(i=0;i<k;i++)
		{
			if(a[i]==j)
			{
			//	printf("前面有相同,k=%d",k);
				return 0;
			}
		}
	if(k == 0)
	{
		return 1;
	}
	if(k == 1)
	{
		if(xl(j,a[0]))
		return 0;
		else return 1;
	}
	if(k == 2)
	{
		if(xl(j,a[1]))
			return 0;
		else return 1;
	}
	if(k == 3)
	{
		if(xl(j,a[0]))
		return 0; 
		return 1;
	}
	if(k == 4)
	{
		if(xl(j,a[0])||xl(a[3],j)||xl(j,a[1]))
			return 0;
		else return 1;
	}
	if(k == 5)
	{
		if(xl(a[1],j)||xl(a[4],j)||xl(j,a[0])||xl(j,a[2]))
			return 0;
		else return 1;
	}
	if(k == 6)
	{
		if(xl(a[1],j)||xl(a[2],j)||xl(j,a[5]))
			return 0;
		else return 1;
	}
	if(k == 7)
	{
		if(xl(j,a[3])||xl(j,a[4]))
			return 0;
		else return 1;
	}
	if(k == 8)
	{
		if(xl(j,a[3])||xl(j,a[4])||xl(j,a[5])||xl(j,a[7]))
			return 0;
		else return 1;
	}
	if(k == 9)
	{
		if(xl(j,a[4])||xl(j,a[5])||xl(j,a[6])||xl(j,a[8]))
			return 0;
		else return 1;
	}
	
}

int xl(int q,int p)
{
	int temp;
	temp = (q>=p)?(q-p):(p-q);
	if(temp == 1 || temp ==0)
	{
		return 1;
	}
	else return 0;
}
