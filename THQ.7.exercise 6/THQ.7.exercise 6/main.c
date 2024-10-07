#include<stdio.h>
void output(int n);
int main(void)
{
int num=0;
printf("请输入数字\n");
scanf("%d",&num);
if(num<0)
{
printf("-");//输出负号
printf(" ");
num=num*-1;
}
output(num);
printf("\n");
return 0;
}


void output(int n)//函数递归顺序（以521为例）
/*
①output（521)------------->②output（52）------------>③output(5)
                                                       ④printf("c",5%10+48);
							                           ⑤printf(" ");
                            ⑥printf("%c",52%10+48);       
			                ⑦printf(" ");
⑧printf("%c",521&10+48);
⑨printf(" ");
*/

{
int i=0;
if((i=n/10)>0)
{
output(i);
}
printf("%c",n%10+48);//输出数字字符
printf(" ");//输出空格
}