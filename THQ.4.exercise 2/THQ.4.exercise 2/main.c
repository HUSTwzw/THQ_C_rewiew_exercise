//���ں����Ľ��ܣ�
/*
��һ��������5λ������������Ҫ��
��������Ǽ�λ��
�ڷֱ����ÿһ������
�۰����������λ����
*/




#include<stdio.h>
int main(void)
{
double a=0;
int i=0;
int j=0;
int arr[5]={0};
int k=0;

for(i=1;i!=0;)
{
i=0;
printf("������һ����������λ��������\n");
scanf("%lf",&a);
if(a<=0)
{
printf("������ֵ��Ϊ�������˴β�����Ч\n");
i=1;
}
if(a/100000.0>=1)
{
printf("�������ֵ����λ���󣬴˴β�����Ч\n");
i=1;
}
if(a!=((int)(a)))
{
printf("������ֵ��Ϊ�������˴β�����Ч\n");
i=1;
}
}
a=(int)(a);
if((int)(a)<=9)
{
arr[0]=(int)(a);
j=0;
}
else
{
for(j=0;a>=10;j++)
{
arr[j]=(int)(a)%10;
a/=10;
}
arr[j]=(int)(a)%10;

}
printf("��%dλ��\n",j+1);
k=j;
for(;k>=0;)
{
printf("%d__",arr[k]);
k-=1;
}
printf("\n");
for(i=0;i<=j;)
{
printf("%d__",arr[i]);
i+=1;
}
printf("\n");
return 0;
}