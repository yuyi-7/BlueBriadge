#include<stdio.h>

int a[3][4],num=0;
int xz[4] = {1,0,-1,0},yz[4]={0,1,0,-1};
static int n=0;
void put(int,int,int);
void output();
int check(int,int);

int main()
{
	int i,j,k,l;
	for(i=0;i<3;i++)	
	for(j=0;j<4;j++)
		a[i][j]=0;
//	output();
for(i=0;i<3;i++)	
	for(j=0;j<4;j++)
	{
		for(k=0;k<3;k++)	
			for(l=0;l<4;l++)
				a[k][l]=0;
		a[i][j] = 1;
		put(i,j,2);
	}
	printf("%d\n",n);
}

void put(int x,int y,int deep)
{
	int i,j,xx,yy;
	if(deep >= 6)
	{
		output();
		n++;
	}
	else
	{
	for(i = 0 ;i < 4;i++)
	{
	//	getchar();
		xx = x + xz[i],yy = y + yz[i];
	//	output();
		if(check(xx,yy))
		{
			a[xx][yy] = deep;			
			put(xx,yy,deep+1);
			a[xx][yy]=0;			
		}
	}
	}	
}

void output()
{
	int i,j;
	for(i=0;i<3;i++)	
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
			if(j==3)
			printf("\n");
		}
		printf("\n");
}

int check(int x,int y)
{
	if(x>2||y>3||x<0||y<0)
		return 0;
	if(a[x][y]!=0)
		return 0;
	return 1;
}
