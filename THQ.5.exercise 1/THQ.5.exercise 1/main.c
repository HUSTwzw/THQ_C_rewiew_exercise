//输入Computer就可以得到Computer
/*
原理在于缓冲区：
从终端键盘向计算机输入时，是在按ENTER键以后才将一批数据一起送到内存缓冲区中去的。
因此不是从终端输入一个字符马上输出一个字符，而是在按ENTER键后数据才送入内存缓冲区，
然后每次从缓冲区读一个字符，再输出该字符。
*/




#include<stdio.h>
int main(void)
{

char c;
for(;(c=getchar())!='\n';)
{
printf("%c",c);
}

return 0;
}