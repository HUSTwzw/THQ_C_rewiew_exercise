//程序题目：输出∑n！（即求1！+2！+……+n！）




#include<stdio.h>
int main(void)
{
int n=0;
int i=1;
long long sum=0;
int part=1;
int j=i;
printf("请输入n的值\n");
scanf("%d",&n);
for(;j<=n;)
{
for(;i>=1;)
{
part*=i;
i--;
}
sum+=part;
j+=1;
i=j;
part=1;
}
printf("总和为%ld\n",sum);
return 0;
}