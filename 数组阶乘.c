#include <stdio.h>
int main()
{
    int n;
    int a[9000]; //ȷ�����������������������㹻��
     int digit = 1; //λ��
     int temp;   //�׳˵���һԪ������ʱ�����ĳλ�ĳ˻����
     int i, j, carry; //carry����λ
 
     printf("please in put n:\n");
    scanf("%d",&n);
    a[0] = 1;   //������ȳ�ʼ��Ϊ1
 
    for ( i=2; i<=n; i++ )  //��ʼ�׳ˣ��׳�Ԫ�ش�2��ʼ����"�ǳ�"
    {  //��������ĳ˷�����˼�������ǣ�����ʱ�����ÿλ��׳�Ԫ�����
         for( j=1, carry=0;  j<=digit; j++ )
        {
            temp = a[j-1] * i + carry; //��Ӧ�׳��е�һ���뵱ǰ������ʱ�����ĳλ��ˣ����Ͻ�λ��
              a[j-1] = temp % 10; //������ʱ�����λ����Ϣ
              carry = temp / 10; //���Ƿ��н�λ
         }
        while(carry)
        {    //������н�λ
              a[++digit-1] = carry % 10; //�¼�һλ�������Ϣ��λ����1
            carry = carry / 10; //�����ܲ��ܽ�λ
         }
    }
    printf("n ! = ");    //��ʾ���
    for(j = digit; j >=1;j--)
    {
    	printf("%d",a[j-1]);
    }
    printf("\n");
    return 0;
}
