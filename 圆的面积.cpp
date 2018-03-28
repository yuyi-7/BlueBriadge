#include<stdio.h>
#include<math.h>

double PI=3.14159265358979323;  
  
int main()  
{  
	
	int n;
	scanf("%d",&n);
    float sq;
    sq = PI * n*n;
  
    printf("%.7f",sq);
    
    return 0;  
} 
