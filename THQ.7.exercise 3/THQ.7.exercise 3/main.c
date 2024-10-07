//程序题目：利用函数自制strcat函数




#include<stdio.h>
#define m 100
void input_a(char a[m]);
void input_b(char b[m]);
char* link(char a[m],char b[m]);
void output(char a[m]);

int main(void)
{
char a[m];
char b[m];
input_a(a);
input_b(b);
link(a,b);//返回数组a的首地址
printf("%s\n",link(a,b));
puts(link(a,b));
return 0;
}


void input_a(char a[m])
{
printf("请输入字符串a\n");
rewind(stdin);
gets(a);
}

void input_b(char b[m])
{
printf("请输入字符串b\n");
rewind(stdin);
gets(b);
}

char* link(char a[m],char b[m])
{
int i=0;
int j=0;
static int k=0;//防止以后每次引用link函数都会再连接一次b数组，需要设置局部静变量，这样每次使用这个函数时k不会再变为0
for(;k==0;)
{
for(i=0;a[i]!='\0';i++)
{
}

for(j=0;b[j]!='\0';j++,i++)
{
*(a+i)=*(b+j);
}
*(a+i)=*(b+j);
k=1;//此时k!=0，意味着以后使用link函数都不会再连接数组b，只会返回数组a的首地址
}
return a;
}

void output(char a[m])
{
printf("%s\n",a);
}