//程序题目：输入一句英文话，每个单词用空格空开，输出英文单词个数




#include<stdio.h>
#include<string.h>
int main(void)
{
char str[100];
int i=0;
int num=1;

printf("请输入一句话\n");
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

printf("有%d个单词\n",num);
return 0;
}