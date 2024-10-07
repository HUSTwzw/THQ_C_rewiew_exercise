//程序题目：输入大写和小写的英文字母，表达该字母的后面的第四个字母（其中w、x、y、z就变为a、b、c、d）
/*
例如：
输入非英文字母就报错；
输入F就输出J；
输入f就输出j；
输入X就输出B；
*/




#include<stdio.h>
int main(void)
{
char a;
int b=0;
int i=0;
for(;i==0;)
{
i=1;
printf("请输入一串英文字母（大小写都可以）");
for(;(a=getchar())!='\n';)
{
	
	if(a>=65&&a<=90||a>=97&&a<=122)
	{
	if((a>=65&&a<=86)||(a>=97&&a<=118))
	{
	printf("%c",a+4);
	}
	else
	{
	printf("%c",a-22);
	}
	}
	else
	{
	i=0;
	printf("遇到错误，只能展示前面正确的部分\n");
	rewind(stdin);
	break;
	}
}
}
printf("\n");
return 0;
}