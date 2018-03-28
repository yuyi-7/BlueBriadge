#include<stdio.h>  
int main()  
{  
    int i,j,n,m;  
    while(scanf("%d",&m)!=EOF)  
    {for(n=0;n<=m;n++)  
    {  
    int num[200];  
    num[0]=1;  
    int digit=1;  
    int next;  
    int temp;  
    for(i=2; i<=n; i++)  
    {  
        for(j=1,next=0; j<=digit; j++)  
        {  
            temp=num[j-1]*i+next;  
            num[j-1]=temp%10;  
            next=temp/10;  
        }  
        while(next)  
        {  
            num[++digit-1]=next%10;  
            next=next/10;  
        }  
    }  
    printf("%d! = ",n);  
    for(i=digit; i>=1; i--)  
    {  
        printf("%d",num[i-1]);  
    }  
    printf("\n");  
    }  
    printf("\n");  
    }  
}  
