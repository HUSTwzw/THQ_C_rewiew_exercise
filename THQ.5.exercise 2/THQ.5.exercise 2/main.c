//������Ŀ�����1-30��쳲���������
/*
쳲��������У�
F1=1����n=1��
F2=1����n=2��
Fn=Fn-1+Fn-2����n>=3��
*/




#include<stdio.h>
int main(void)
{
int j=1;
int k=1;
int s=0;
int num=0;
printf("%d\n",j);
printf("%d\n",k);
for(num=3;num<30;num++)
{
s=j+k;
printf("%d\n",s);
j=k;
k=s;
}
return 0;
}