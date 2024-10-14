//程序题目：一个班3个学生，每人学习4门课，计算并输出总平均分数，同时输出第n个学生的4门课成绩




#include<stdio.h>
void input(int (*p)[4]);
void calculation(int (*p)[4]);
void output(int (*p)[4],int i);
int main(void)
{
int arr[3][4];
int number;
input(arr);
calculation(arr);
printf("请问要查询第几名同学的成绩\n");
scanf("%d",&number);
output(arr,number);
return 0;
}

void input(int (*p)[4])
{
int i=0;
int j=0;
for(i=0;i<=2;i++)
{
for(j=0;j<=3;j++)
{
printf("请输入第%d位同学第%d门课的成绩\n",i+1,j+1);
scanf("%d",*(p+i)+j);
}
}
}

void calculation(int (*p)[4])
{
float sum=0;
float average=0;
int i=0;
int j=0;
for(i=0;i<=2;i++)
{
for(j=0;j<=3;j++)
{
sum+=*(*(p+i)+j);
}
}
average=sum/12.0;
printf("平均成绩为：%f\n",average);
}

void output(int (*p)[4],int i)
{
int j=0;
for(j=0;j<=3;j++)
{
printf("第%d名学生第%d门课的成绩为：%d\n",i,j+1,*(*(p+i-1)+j));
}
}