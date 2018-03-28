#include<stdio.h>
int main()
{
	int i=0,j=0,m,temp,carry,a[100],b[100],c[150],bit;
	char t;
	for(i=0;i<100;i++)
	{
		a[i] = 0;
		b[i] = 0;
	}
	i=0,j=0;
	while(t=getchar())
	{
		if(t != '\n')
			a[i++] = t - '0';
		else
			break;
	}
	
	while(t=getchar())
	{
		if(t != '\n')
			b[j++] = t - '0';
		else
			break;
	}
	bit = (i>j)?i:j;
//	printf("%d",bit);
	for(m = 0,carry = 0; m < bit ; m++)
	{		
		if(i == 0 || j == 0)
		{
	//	printf("高位%d\n",carry);
			temp = (i)?(a[--i]+carry):(b[--j]+carry);
			c[m] = temp%10;
	//		printf("%d\n",temp);
			carry = temp/10; 
	//		printf("%d\n",carry);
	//		carry /= 10;	

		}
		else
		{		 
		temp = a[--i] + b[--j] + carry;		
		c[m] = temp%10;
		carry = temp/10;
	//	printf("%d,%d\n",temp,carry);
		}
	}
	while(carry)
	{
		c[bit++] = carry%10;
		carry /= 10;
	//	printf("进入循环\n");
	}
//	printf("bit为%d\n",bit);
	for(m=bit-1;m>=0;m--)
	{
		printf("%d",c[m]);
	}
	return 0;
}
