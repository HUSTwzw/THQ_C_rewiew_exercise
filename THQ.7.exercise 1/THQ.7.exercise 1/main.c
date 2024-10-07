//程序题目：利用函数的递归调用求n的阶乘




#include<stdio.h>
int fun(int n);
int main(void)
{
int n=0;
int num=0;
printf("请输入n的值：");
scanf("%d",&n);
num=fun(n);
printf("n的阶乘为：%d\n",num);

return 0;
}

int fun(int n)
{
if(n==1)
{
return 1;
}
if(n>1)
{
return n*fun(n-1);
}
}