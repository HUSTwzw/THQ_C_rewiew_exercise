//������Ŀ
/*
����A������ȫ��ѧ�����ſεĳɼ�
����B�����㲢���ÿ��ѧ�����ſε�ƽ���ɼ�
����C�����㲢������ſε�ȫ��ƽ���ɼ�
����D����ȫ��ѧ����ƽ���ɼ��ɸߵ����������
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
printf("�����������\n");
rewind(stdin);
scanf("%c",&order);
switch(order)
{
case'A':k=input(c_score,ps_score,math_score);j+=1;break;
case'B':calcu(c_score,ps_score,math_score,average,k);j+=1;break;
case'C':calcu2(c_score,ps_score,math_score,k,av_c,av_ps,av_math);j+=1;break;
case'D':sequence(average,k);j+=1;break;
default:printf("�˴������������������\n");
}
}
return 0;
}


int input(int c_score[m],int ps_score[m],int math_score[m])
{
int i=0;
int max=0;
printf("������ѧ������:\n");
scanf("%d",&max);
for(i=0;i<max;i++)
{
printf("�������%d��ѧ����C���Գɼ�:\n",i+1);
scanf("%d",&c_score[i]);
printf("�������%d��ѧ����PS�ɼ�:\n",i+1);
scanf("%d",&ps_score[i]);
printf("�������%d��ѧ������ѧ�ɼ�:\n",i+1);
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
printf("��%d��ѧ��������ƽ���ɼ�Ϊ:%lf\n",i+1,average[i]);
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
printf("ȫ���C����ƽ���ɼ�Ϊ%lf:\n",av_c);
printf("ȫ���PSƽ���ɼ�Ϊ%lf:\n",av_ps);
printf("ȫ�����ѧƽ���ɼ�Ϊ%lf:\n",av_math);
}

void sequence(double average[m],int k)//���������ð��
{
int i=0;
int j=0;

double t;

for(j=0;j<k-1;j++)
{
for(i=0;i<k-1-j;)
{
if(average[i]<average[i+1])//��õ��ɴ�С�����򣬾������ж����ڵ����Ĵ�С������С�����ź��棬������һ�ֲ�����ʹ����С������������档
	                       //ͬ���������ֲ�������ʹ�õڶ�������С�������ڵ����ڶ�������������λ�ã������γ��ɴ�С������
{
t=average[i];
average[i]=average[i+1];
average[i+1]=t;
}
i++;
}
}
printf("�ɼ��Ӹߵ��Ϳ�ʼ����:\n");
for(i=0;i<k;i++)
{
printf("%lf\n",average[i]);
}
}