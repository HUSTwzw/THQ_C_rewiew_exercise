//关于函数的介绍：
/*
给一个不多于5位数的正整数，要求：
①求出它是几位数
②分别输出每一个数字
③按逆序输出各位数字
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
printf("请输入一个不多于五位的正整数\n");
scanf("%lf",&a);
if(a<=0)
{
printf("输入数值不为正数，此次操作无效\n");
i=1;
}
if(a/100000.0>=1)
{
printf("输入的数值比五位数大，此次操作无效\n");
i=1;
}
if(a!=((int)(a)))
{
printf("输入数值不为整数，此次操作无效\n");
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
printf("是%d位数\n",j+1);
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