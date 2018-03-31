#include<stdio.h>
#include<stdlib.h>
int num=1;

void swap(int *,int *);
int main()
{
	int *a,i,j,n,temp;
	a = (int *) malloc(1);
	scanf("%d",&n);
	realloc(a,n+1);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		if(a[i]!=i)
		{
			for(j=i;j<n;j++)
			{
				if(a[j]==i)
					{
						swap(&a[j],&a[i]);
						num ++;
						for(temp=1;temp<=n;temp++)
							printf("%d ",a[temp]);
							printf("\n");
					}
			}
		}
	}
	printf("%d",num);
	return 0;
 } 
 
 
void swap(int *k,int *l)
{
	int temp;
	temp = *k;
	*k = *l;
	*l = temp;
}
