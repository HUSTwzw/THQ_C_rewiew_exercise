//������Ŀ������һ��Ӣ�Ļ���ÿ�������ÿո�տ������Ӣ�ĵ��ʸ���




#include<stdio.h>
#include<string.h>
int main(void)
{
char str[100];
int i=0;
int num=1;

printf("������һ�仰\n");
rewind(stdin);
gets(str);

for(i=1;str[i]!='\0';)
{
if(((str[i]>=65&&str[i]<=90)||str[i]>=97&&str[i]<=122)&&(str[i-1]==' '))
{
	num+=1;
}
i++;
}

printf("��%d������\n",num);
return 0;
}