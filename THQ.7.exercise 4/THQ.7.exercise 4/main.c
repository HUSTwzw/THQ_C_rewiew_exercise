//������Ŀ��дһ������������һ���ַ��������ַ�����ĵ������




#include<stdio.h>
void output(char str[100]);
void input(char str[100]);
int main(void)
{
char str[100];//����ַ����鲻���г�ʼ�������������ַ��������ʱʹ��scanf("%s")��gets()����ʹ�س������Ԫ�ر�Ϊ'\0',��������,��˾���Ҫʹ������input����
printf("������һ��Ӣ�Ļ�\n");
rewind(stdin);
input(str);//Ҳ���滻Ϊchar str[100]={'0'}(�ȳ�ʼ��)������gets(str)
output(str);
printf("\n");
return 0;
}
void input(char str[100])
{
char a;
int i=0;
for(i=0;(a=getchar())!='\n';i++)
{
str[i]=a;
}
for(;i<100;i++)
{
str[i]='\0';
}
}

void output(char str[100])
{
int i=0;
int num=0;
int max=0;
int i_be=0;
int i_en=0;
int j=0;
int k=0;
int m=0;

for(;str[i]!='\0';)
{
i_be=i;
for(i=i_be,num=0;(str[i]>=65&&str[i]<=90)||str[i]>=97&&str[i]<=122;i++)
{
num+=1;
}

i_en=i-1;
if(max<num)
{
max=num;
j=i_be;
k=i_en;
}
i++;

}

printf("��ĵ����ǣ�");
for(m=j;m<=k;m++)
{
printf("%c",str[m]);
}
}
