//������Ŀ��ͨ��������ʮ��������ת��Ϊʮ������




#include<stdio.h>
#include<math.h>
void length(char str[100]);
void amount(char str[100]);
void change(char str[100]);
int len=0;
int a=0;
int main(void)
{
char str[100]={'0'};
printf("����ʮ��������\n");
gets(str);
length(str);
amount(str);
change(str);
printf("��Ӧ��ʮ������Ϊ%d\n",a);
return 0;
}


void length(char str[100])
{
int i=0;
for(i=0;str[i]!='\0';i++)
{
}
len=i;
}

void amount(char str[100])
{
int i=0;
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=65&&str[i]<=70)
{
str[i]-=55;
}
else if(str[i]>=97&&str[i]<=102)
{
str[i]-=87;
}
else if(str[i]>=48&&str[i]<=57)
{
str[i]-=48;
}
}
}

void change(char str[100])
{
int i=0;
for(i=0;i<=len-1;i++)
{
a+=str[i]*pow(16.0,len-1-i);
}
}