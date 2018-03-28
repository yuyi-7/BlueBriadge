#include<stdio.h>

int main()  
{  
	int n;
	int list[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&list[i]);
    int min,temp;
    for (int i=0;i<10;i++)
	{
		min =i;
		for(int j=i+1;j<n;j++)
		{
			if(list[j]<list[min])
			min = j;
		}
		if(min != i)
		{
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
	}
	 
	 for(int i=0;i<n;i++) 
		printf("%5d",list[i]);
    return 0;  
} 
