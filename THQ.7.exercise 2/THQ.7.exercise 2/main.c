//程序题目：通过函数使给定的一个3*3的二维整型数组转置，即行列互换。




#include<stdio.h>
void input(int arr[3][3]);
void change(int arr[3][3]);
void output(int arr[3][3]);
int main(void)
{
int arr[3][3];
input(arr);
change(arr);
output(arr);
return 0;
}


void input(int arr[3][3])
{
int i=0;
int j=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}
}


void change(int arr[3][3])
{
int i=0;
int j=0;
int a_r_r[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
a_r_r[i][j]=arr[j][i];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr[i][j]=a_r_r[i][j];
}
}
}


void output(int arr[3][3])
{
int i=0;
int j=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d  ",arr[i][j]);
if(j==2)
{
printf("\n");
}
}
}
}