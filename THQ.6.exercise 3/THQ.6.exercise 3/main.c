//������Ŀ���ҳ�һ��4��5�еİ��㣨�����Ǹ�����󡢸�����С������




#include<stdio.h>
#define m 4
#define n 5
int main(void)
{
int arr[m][n];
int i=0;
int j=0;
int max_j=0;
int b=0;
int c=0;
int d=0;


printf("������4��5�е�����\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<m;i++)
{

for(max_j=0,j=0;j<n;j++)
{
if(arr[i][max_j]<arr[i][j])
{
max_j=j;
}
}
for(c=0,b=0;b<m;b++)
{
if(arr[b][max_j]<arr[i][max_j])
{
c++;
}
}
if(c==0)
{
printf("arr[%d][%d]�ǰ���\n",i,max_j);
d++;
}
}
if(d==0)
{
printf("����û�а���\n");
}
return 0;
}