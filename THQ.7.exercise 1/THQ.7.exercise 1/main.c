//������Ŀ�����ú����ĵݹ������n�Ľ׳�




#include<stdio.h>
int fun(int n);
int main(void)
{
int n=0;
int num=0;
printf("������n��ֵ��");
scanf("%d",&n);
num=fun(n);
printf("n�Ľ׳�Ϊ��%d\n",num);

return 0;
}

int fun(int n)
{
if(n==1)
{
return 1;
}
if(n>1)
{
return n*fun(n-1);
}
}