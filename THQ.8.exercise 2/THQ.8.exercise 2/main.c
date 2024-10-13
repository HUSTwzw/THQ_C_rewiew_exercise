//程序题目：对数组中n个整数按由大到小的顺序排序（使用指针）




#include<stdio.h>
#define len 20
void input(int *a,int amount);
void change(int *a,int amount);
void output(int *a,int amount);
int main(void)
{
int arr[len];
int amount;
printf("请问要输入几个数\n");
scanf("%d",&amount);
input(arr,amount);
change(arr,amount);
output(arr,amount);
return 0;
}


void input(int *a,int amount)
{
int i=0;
int *p=a;
for(;p<=a+amount-1;)
{
printf("请输入第%d个数\n",++i);
scanf("%d",p++);
}

}

void change(int *a,int amount)
{
int bridge=0;
int i=0;
int j=0;
for(j=0;j<=amount-2;j++)
{
for(i=0;i+1<=amount-1-j;i++)
{
if(*(a+i)<*(a+i+1))
{
bridge=*(a+i);
*(a+i)=*(a+i+1);
*(a+i+1)=bridge;
}
}

}
}

void output(int *a,int amount)
{
int i=0;
for(i=0;i<=amount-1;i++)
{
printf("%d  ",*(a+i));
}
}