//程序题目：一个班有3个学生，每个学生学习4门课程，当一名学生有两门及以上的课不及格（成绩低于60），输出这名学生的所有成绩




#include<stdio.h>
void input(int (*p)[4]);
void output(int (*p)[4]);
int main(void)
{
int arr[3][4];
input(arr);
output(arr);
return 0;
}

void input(int (*p)[4])
{
int i=0;
int j=0;
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("请输入第%d名学生第%d门课的成绩\n",i+1,j+1);
scanf("%d",*(p+i)+j);
}
}
}

void output(int (*p)[4])
{
int k=0;
int i=0;
int j=0;
for(i=0;i<3;i++)
{
for(k=0,j=0;j<4;j++)
{
if(*(*(p+i)+j)<60)
{
k+=1;
}

}
if(k>1)
{
for(j=0;j<4;j++)
{
printf("第%d名学生的第%d门课的成绩是:%d\n",i+1,j+1,*(*(p+i)+j));
}
}
}
}