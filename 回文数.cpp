#include<stdio.h>
int n;
long temp,turn,temp_ge,sum;
void run(int);

int main(void)
{
	scanf("%d",n);
	run(10000);
	return 0;
}

void run(int k)
{
	if(k<999999)
	{
		temp = k;
		turn = 0;
		sum = 0;
		while(temp)
		{
			temp_ge = temp%10;
			sum += temp_ge;
			turn = turn*10 + temp_ge;
			temp = temp/10;
		}
		if(turn == k && sum == n)
		{
			printf("%d\n",k);
		}
		run(k++);
	}
	
}
