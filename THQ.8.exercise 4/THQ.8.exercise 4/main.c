//������Ŀ��һ������3��ѧ����ÿ��ѧ��ѧϰ4�ſγ̣���һ��ѧ�������ż����ϵĿβ����񣨳ɼ�����60�����������ѧ�������гɼ�




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
printf("�������%d��ѧ����%d�ſεĳɼ�\n",i+1,j+1);
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
printf("��%d��ѧ���ĵ�%d�ſεĳɼ���:%d\n",i+1,j+1,*(*(p+i)+j));
}
}
}
}