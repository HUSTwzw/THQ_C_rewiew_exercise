//程序题目：自制strcmp函数改良版
/*
比较大小的方式和strcmp相同
当两个字符串完全相同时，输出0；当两个字符串不相同时，输出所比字符前者与后者ASCII码相减所得的值
*/




#include<stdio.h>
int main(void)
{

char a[100];
char b[100];
int i=0;
int num=0;


printf("请输入第一组字符\n");
rewind(stdin);
gets(a);
printf("请输入第二组字符\n");
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