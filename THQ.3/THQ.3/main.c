//这个程序主要介绍pow函数使用以及浮点型保留有效数字的操作




#include<stdio.h>
#include<math.h>
int main (void)
{
double a=2.5;
double c=pow(a,2.5);//pow函数返回类型是double，括号内两个变量至少一个是浮点型，最好两个都是浮点型
double d=pow(2,3.5);
int e=0;
int f=3;

printf("%f\n",c);
printf("%10.3f\n",d);
printf("%1.3f\n",d);
printf("%.10f\n",d);//.n代表保留n位小数，double型保证15位有效数字是精准的
//对于%m.nf而言，n代表输出的小数部分（自动四舍五入），若输出的整数部分与小数点与小数部分>m，则正常输出；若输出的整数部分与小数点与小数部分<m，则会在输出的数字前面打出空格
//例如对于10/3.0而言，当n=3时小数部分为333，整数部分为3，小数点也占一位，因此当m>5时，就会在前面出现空格，否则就是正常输出3.333
if((e=f)>2)
{
printf("nihao\n");
}
return 0;
}