//程序题目：输入十个数，将其由小到大排列（分别使用三种排序方式）
/*
排序方式①：冒泡法
排序方式②：选择法
排序方式③：希尔法
*/




//冒泡法
/*
#include<stdio.h>
int main(void)
{
int arr[10]={0};
int i=0;
int j=0;
int k=0;
int m=0;
printf("请输入10个数\n");
for(i=0;i<=9;i++)
{
scanf("%d",&arr[i]);
}
for(j=0;j<9;j++)
{
for(i=0;i<9-j;i++)
{
if(arr[i]>arr[i+1])
{
m=arr[i];
arr[i]=arr[i+1];
arr[i+1]=m;
}
}
}
for(k=0;k<10;k++)
{
printf("%d  ",arr[k]);
}
printf("\n");
return 0;
}
*/





//选择法
/*
#include<stdio.h>
int main(void)
{
int arr[10]={0};
int i=0;
int min=0;
int j=0;
int bridge=0;
int k=0;
int p=0;
int q=0;
int m=0;
int n=0;

printf("请输入10个数\n");
for(;m<10;m++)
{
scanf("%d",&arr[m]);
}


for(;p<9;p++)
{
for(min=arr[i];i<=9;i++)
{
if(arr[i]<min)
{
min=arr[i];
}

}

for(j=q;(arr[j]!=min)&&j<=9;j++)//j不能从0开始，否则多个数大小相同时会出错
//例如排列为2，2，23，34，32，2，5，53，27，8时，此时前两个数已经是最小值，想要把剩余的最小值（当前第六位的数字2）排到第三位，就需要从第三位开始往后寻找最小值（即j=q）。
//若从第一位开始（j=0），就会直接找到前面的大小相同的数（当前第一位的数字2），就会发生错误
{

}
bridge=arr[k];
arr[k]=arr[j];
arr[j]=bridge;
k++;

q++;
i=q;

}


for(;n<10;n++)
{
printf("%d  ",arr[n]);
}

return 0;
}
*/





//插入法
/*
#include<stdio.h>
int main(void)
{
int arr[10]={0};
int a_r_r[10]={0};
int i=0;
int j=1;
int bridge=0;
int stake=0;
int k=1;
int h=0;
int a=0;
int b=0;



printf("请输入10个数\n");
for(b=0;b<10;b++)
{
scanf("%d",&arr[b]);
}

for(;k<10;)
{
for(;;)
{
if(arr[i]>arr[j]&&i>=1)
{
i--;
}
else if(arr[i]>arr[j]&&i==0)
{
j=i;
break;
}
else if(arr[i]<=arr[j]&&i>=0)
{
j=i+1;
break;
}
}
for(a=0;a<10;a++)
{
a_r_r[a]=arr[a];
}
for(h=j,stake=arr[k];k!=j;j++)//此处k!=j有两个作用（核心）：
//①若arr[k]本就处于正确的位置（第j位（从第0位开始算）），则不需要对后面的数字进行移动。
//②若arr[k]应该放到前面（第j位（从第0位开始算）），那就将第j到k-1位移动到第j+1位到k位，并把原来的第k位移动到第j位。
//若不希望原来第k位即以后的位数移动到后一位，就需要使j!=k来阻止j++的循环
{
arr[j+1]=a_r_r[j];
}
arr[h]=stake;
k++;
i=k-1;
j=k;
}

for(b=0;b<10;b++)
{
printf("%d  ",arr[b]);
}
return 0;
}
*/