#include <stdio.h>  
#include <math.h>  
  
int mpt[5000010] ={0};  //mpt[i] = 1��ʾi �ܹ���������ȫƽ������Ӷ��á�  
int n;  
  
void init()  
{  
int i,j;
    for(i = 0 ; i*i <= n ; i ++)  
        for(j = 0 ; j*j <=n ; j ++)  
            if( i*i+j*j <= n) 
				mpt[i*i+j*j] = 1;  
}  
  
int main()  
{  
    int flag = 0,i,j,k;  
    scanf("%d",&n);  
    init();  
    for(i = 0 ; i * i <= n ; i ++)  
    {  
        for(j = 0 ; j * j <= n ; j ++)
		{  
            if(mpt[n - i*i - j*j] == 0)  
                continue;   //���ʣ�µĲ���������ȫƽ����������ϳ����Ͳ�����  
  
            for(k = 0 ; k * k <= n ; k ++)  
            {  
                int temp = n - i*i - j*j - k*k;  
                double l = sqrt((double) temp);  
                if(l == (int)l )  
                {  
                    printf("%d %d %d %d\n",i,j,k,(int)l);  
                    flag = 1;  
                    break;  
                }  
            }  
            if(flag)break;  
        }  
        if(flag)break;  
    }  
    return 0;  
} 
