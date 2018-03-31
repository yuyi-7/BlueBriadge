#include<stdio.h>

char q[2][3];
int xz[] = {1,0,-1,0},yz[] = {0,1,0,-1};
int step=1,min=10000,u=0;
int a[2],b[2],space[2];

void move(int,int,int);
void output();
int check(int,int);
void swap(char *i,char *j);

int main()
{
	int i,j,k;
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			{
				q[i][j] = getchar();
				if(j==2) printf("\n");	
				if(q[i][j]=='A')
				{
					a[0] = i,a[1]=j;
				}
				if(q[i][j] == 'B')
				{
					b[0]=i,b[1]=j;
				}
				if(q[i][j] == ' ')
				{
					space[0]=i,space[0]=j;
				}		
			}
	move(space[0],space[1],step);
	printf("%d",min);
	
	return 0;
}

void move(int x,int y,int step)
{
	int xx,yy,i;
	if(q[a[0],a[1]] == 'B' && q[b[0],b[1]] == 'A')
	{
		//output();
		printf("%d\n",step);
		min = (min>step)?step:min;
	}
	
	else
	{
		for(i = 0 ; i < 4 ; i ++)
		{ 
			xx = x + xz[i],yy = y + yz[i];
			if(check(xx,yy))
			{
				swap(&q[x][y],&q[xx][yy]);
				move(xx,yy,step+1);
				swap(&q[x][y],&q[xx][yy]);
			}
		} 
	}
}

void output()
{
	int i,j;
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			{
				printf("%c",q[i][j]);
				if(j==2) printf("\n");	
			} 
}

int check(int x,int y)
{
	if(x>1||x<0||y>2||y<0)
		return 0;
	else return 1;
}

void swap(char *i,char *j)
{
	char temp;
	temp = *i;
	*i = *j;
	*j = *i;
	
}
