//程序题目：输入正整数m、n，求最大公约数与最小公倍数




#include<stdio.h>
int main(void)
{
int m=0;
int n=0;
int col_min=0;
int col_max=0;
int i=1;
int max=0;
int min=0;
printf("请输入m与n的值\n");
scanf("%d",&m);
scanf("%d",&n);
if(m>=n)
{
max=m;
min=n;
}
else
{
max=n;
min=n;
}
for(i=1;i<=min;i++)
{
if((m%i==0)&&(n%i==0))
{
col_max=i;
}
}
for(i=max;;i++)
{
if((i%m==0)&&(i%n==0))
{
col_min=i;
break;
}
}
printf("最大公约数：%d\n",col_max);
printf("最小公倍数：%d\n",col_min);

return 0;
}