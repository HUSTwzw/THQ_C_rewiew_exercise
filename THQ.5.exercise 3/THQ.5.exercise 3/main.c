//������Ŀ
/*
��������a������b��a>=2��b>=2��a<b��
���a��b֮�������������������
*/




#include<stdio.h>
int main(void)
{
int num=0;
int m=0;
int i=2;
int a=0;
int b=0;
int yu=0;
int chu=2;
int j=0;

for(;m==0;)
{
printf("����������a��\n");
scanf("%d",&a);
if(a<=1)
{
printf("���������a���󣬴˴β�����Ч\n");
}
else
{
for(;m==0;)
{
printf("����������b��\n");
scanf("%d",&b);
if(b<=a)
{
printf("���������b���󣬴˴β�����Ч\n");

}
else
{
m=1;
}
}
}
}
printf("\n");
for(j=0;a+j<=b;j++)
{
for(;yu!=0;)
{
yu=(a+j)%chu;
chu++;
}

if(a+j==chu-1)
{
printf("%d\n",a+j);
}
yu=1;
chu=2;
}
return 0;
}