//������Ŀ��һ����3��ѧ����ÿ��ѧϰ4�ſΣ����㲢�����ƽ��������ͬʱ�����n��ѧ����4�ſγɼ�




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
printf("����Ҫ��ѯ�ڼ���ͬѧ�ĳɼ�\n");
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
printf("�������%dλͬѧ��%d�ſεĳɼ�\n",i+1,j+1);
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
printf("ƽ���ɼ�Ϊ��%f\n",average);
}

void output(int (*p)[4],int i)
{
int j=0;
for(j=0;j<=3;j++)
{
printf("��%d��ѧ����%d�ſεĳɼ�Ϊ��%d\n",i,j+1,*(*(p+i-1)+j));
}
}