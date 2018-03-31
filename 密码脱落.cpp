#include<stdio.h>

char a[1000];
int min=0,num;

void find(int,int,int); 
int main()
{
	int i=0,j,k;
	char temp;
	
	while(temp=getchar())
	{
		if(temp == '\n') break;
		else a[i++] = temp;
	}

	find(0,i-1,0);
	printf("%d",min);
	return 0;
}

void find(int left,int right,int num)
{
	if(left >= right)
	{
		min = min<num ? min:num;
	}
	else
	{
		if(a[left] == a[right])
		{
			find(left+1,right-1,num);
		}
		else
		{
			find(left+1,right,num+1);
			find(left,right-1,num+1);
		}
	}
}
