//������Ŀ������strcmp����������
/*
�Ƚϴ�С�ķ�ʽ��strcmp��ͬ
�������ַ�����ȫ��ͬʱ�����0���������ַ�������ͬʱ����������ַ�ǰ�������ASCII��������õ�ֵ
*/




#include<stdio.h>
int main(void)
{

char a[100];
char b[100];
int i=0;
int num=0;


printf("�������һ���ַ�\n");
rewind(stdin);
gets(a);
printf("������ڶ����ַ�\n");
rewind(stdin);
gets(b);
for(i=0;a[i]!='\0'||b[i]!='\0';i++)
{
if(a[i]>b[i])
{
num=a[i]-b[i];
break;
}
if(a[i]<b[i])
{
num=a[i]-b[i];
break;
}
if(a[i]==b[i])
{
num=0;
}
}
printf("%d\n",num);
return 0;
}