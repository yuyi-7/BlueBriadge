#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,temp,carry,a[10000],i,j,bit=0;
	scanf("%d",&n);
	a[0] = 1;
	for(i=2;i<=n;i++)
	{
		for(j=0,carry=0;j<=bit;j++)
		{
			temp = a[j] * i + carry;
			a[j] = temp%10;
			carry = temp/10;
		 } 
		 while(carry)
		 {
		 	
		 	a[++bit] = carry%10;
		 	carry /= 10;
		 }
	}
	for(i=bit;i>=0;i--)
		printf("%d",a[i]); 
	return 0;
 } 
