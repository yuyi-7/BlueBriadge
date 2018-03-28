#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int *p,*q,n,i,j,min,temp;
	scanf("%d",&n);
	p = (int *) malloc(1);
	realloc(p,n);
	q = p;
	for(i=0; i<n ; i++)
	{
		scanf("%d",p++);
	}
/*	for(i=0 ; i<n ; i++)
	printf("%d ",*q++);*/
	for ( i=0 ; i< n-1 ; i++) //n-1лкеепР
    {
        min=i;
        for (j=i+1 ; j < n ; j++)
            if (q[j] < q[min] )
                min=j;
        if ( min!=i)
        {
            temp     = q[i];
            q[i]     = q[min];
            q[min] = temp;
        }
    }		
		
	
	for(i=0 ; i<n ; i++)
	printf("%d ",q[i]); 
	return 0;
 } 
