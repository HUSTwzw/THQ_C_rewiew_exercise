//程序题目
/*
输入A：输入全班学生各门课的成绩
输入B：计算并输出每个学生各门课的平均成绩
输入C：计算并输出各门课的全班平均成绩
输入D：对全班学生的平均成绩由高到低排序并输出
*/



#define _CRT_SECURE_NO_WARNNINGS 1
#include<stdio.h>
#define m 50
int input(int c_score[m],int ps_score[m],int math_score[m]);
void calcu(int c_score[m],int ps_score[m],int math_score[m],double average[m],int max);
void calcu2(int c_score[m],int ps_score[m],int math_score[m],int k,double av_c,double av_ps,double av_math);
void sequence(double average[m],int k);
int main(void)
{
char order; 
int c_score[m]={0};
int ps_score[m]={0};
int math_score[m]={0};
double average[m]={0.0};
double av_c=0;
double av_ps=0;
double av_math=0;
int j=0;
int k=0;


for(;j<4;)
{
printf("请输入操作：\n");
rewind(stdin);
scanf("%c",&order);
switch(order)
{
case'A':k=input(c_score,ps_score,math_score);j+=1;break;
case'B':calcu(c_score,ps_score,math_score,average,k);j+=1;break;
case'C':calcu2(c_score,ps_score,math_score,k,av_c,av_ps,av_math);j+=1;break;
case'D':sequence(average,k);j+=1;break;
default:printf("此次输入错误，请重新输入\n");
}
}
return 0;
}


int input(int c_score[m],int ps_score[m],int math_score[m])
{
int i=0;
int max=0;
printf("请输入学生个数:\n");
scanf("%d",&max);
for(i=0;i<max;i++)
{
printf("请输入第%d个学生的C语言成绩:\n",i+1);
scanf("%d",&c_score[i]);
printf("请输入第%d个学生的PS成绩:\n",i+1);
scanf("%d",&ps_score[i]);
printf("请输入第%d个学生的数学成绩:\n",i+1);
scanf("%d",&math_score[i]);
}
return max;
}

void calcu(int c_score[m],int ps_score[m],int math_score[m],double average[m],int k)
{
int i=0;
for(i=0;i<k;i++)
{
average[i]=(double)((c_score[i]+ps_score[i]+math_score[i])/3.0);
printf("第%d名学生的三科平均成绩为:%lf\n",i+1,average[i]);
}
}

void calcu2(int c_score[m],int ps_score[m],int math_score[m],int k,double av_c,double av_ps,double av_math)
{
int i=0;
double sum_c=0;
double sum_ps=0;
double sum_math=0;
for(i=0;i<k;i++)
{
sum_c+=c_score[i];
sum_ps+=ps_score[i];
sum_math+=math_score[i];
}
av_c=(double) (sum_c/k);
av_ps=(double) (sum_ps/k);
av_math=(double) (sum_math/k);
printf("全班的C语言平均成绩为%lf:\n",av_c);
printf("全班的PS平均成绩为%lf:\n",av_ps);
printf("全班的数学平均成绩为%lf:\n",av_math);
}

void sequence(double average[m],int k)//排序可利用冒泡
{
int i=0;
int j=0;

double t;

for(j=0;j<k-1;j++)
{
for(i=0;i<k-1-j;)
{
if(average[i]<average[i+1])//想得到由大到小的排序，就依次判断相邻的数的大小，并将小的数排后面，这样第一轮操作就使得最小的数排在最后面。
	                       //同样经过多轮操作，就使得第二、第三小的数排在倒数第二、倒数第三的位置，最终形成由大到小的排序
{
t=average[i];
average[i]=average[i+1];
average[i+1]=t;
}
i++;
}
}
printf("成绩从高到低开始排序:\n");
for(i=0;i<k;i++)
{
printf("%lf\n",average[i]);
}
}