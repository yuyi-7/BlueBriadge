#include<stdio.h>
long long N;
long long a[100000];


int main()
{
	long long k,n,max;
	int i=0;
	scanf("%ld",&N);
	k = N;
	max = 0;
	while(k!=1)
	{
		if(k%2==0)
			k = k/2;
		else
			k=k*3+1;
		max = (k>=max)?k:max;

//		printf("%ld\n",k);
	}
	printf("%ld",max);
		return 0;
}
