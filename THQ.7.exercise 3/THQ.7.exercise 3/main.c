//������Ŀ�����ú�������strcat����




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
link(a,b);//��������a���׵�ַ
printf("%s\n",link(a,b));
puts(link(a,b));
return 0;
}


void input_a(char a[m])
{
printf("�������ַ���a\n");
rewind(stdin);
gets(a);
}

void input_b(char b[m])
{
printf("�������ַ���b\n");
rewind(stdin);
gets(b);
}

char* link(char a[m],char b[m])
{
int i=0;
int j=0;
static int k=0;//��ֹ�Ժ�ÿ������link��������������һ��b���飬��Ҫ���þֲ�������������ÿ��ʹ���������ʱk�����ٱ�Ϊ0
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
k=1;//��ʱk!=0����ζ���Ժ�ʹ��link��������������������b��ֻ�᷵������a���׵�ַ
}
return a;
}

void output(char a[m])
{
printf("%s\n",a);
}