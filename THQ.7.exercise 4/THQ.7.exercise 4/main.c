//程序题目：写一个函数，输入一行字符，将此字符中最长的单词输出




#include<stdio.h>
void output(char str[100]);
void input(char str[100]);
int main(void)
{
char str[100];//如果字符数组不进行初始化，那数组中字符随机，此时使用scanf("%s")和gets()不能使回车后面的元素变为'\0',而是乱码,因此就需要使用自制input函数
printf("请输入一句英文话\n");
rewind(stdin);
input(str);//也可替换为char str[100]={'0'}(先初始化)，再用gets(str)
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

printf("最长的单词是：");
for(m=j;m<=k;m++)
{
printf("%c",str[m]);
}
}
