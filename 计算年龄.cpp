#include<stdio.h>
 
 int main()
{
	int i,j,old1=0,old2=0,n=0,s,g;
	for(old1=30;old1<99;old1++)
	{
		old2 = old1 - 27;
		s = old1/10;
		g = old1%10;
		if((g*10+s) == old2)
		{
			printf("%d,%d\n",old1,old2);
			n++;
		}
	}
		
	  printf("%d\n",n);
	return 0;
}
