//程序题目
/*
输入整数a与整数b（a>=2且b>=2且a<b）
输出a与b之间的所有素数（质数）
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
printf("请输入整数a：\n");
scanf("%d",&a);
if(a<=1)
{
printf("输入的整数a错误，此次操作无效\n");
}
else
{
for(;m==0;)
{
printf("请输入整数b：\n");
scanf("%d",&b);
if(b<=a)
{
printf("输入的整数b错误，此次操作无效\n");

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