//������Ŀ�����������n���������෴˳���ţ�����ָ�룩




#include<stdio.h>
#define len 20
void input(int *a,int amount);
void change(int *a,int amount);
void output(int *a,int amount);
int main(void)
{
int arr[len];
int amount=0;
int i=0;
printf("����Ҫ���뼸����\n");
scanf("%d",&amount);
input(arr,amount);
change(arr,amount);
output(arr,amount);

return 0;
}

void input(int *a,int amount)
{
int *p=a;
int i=0;
for(;p<=a+amount-1;)
{
printf("�������%d������\n",++i);
scanf("%d",p++);
}

}


void change(int *a,int amount)
{
int bridge;
int i=0;
for(i=0;i<=(amount-1)/2;i++)
{
bridge=*(a+i);
*(a+i)=*(a+amount-1-i);
*(a+amount-1-i)=bridge;
}

}


void output(int *a,int amount)
{
int i=0;
for(;i<=amount-1;i++)
{
printf("%d  ",*(a+i));
}
}