//������Ŀ�������д��Сд��Ӣ����ĸ��������ĸ�ĺ���ĵ��ĸ���ĸ������w��x��y��z�ͱ�Ϊa��b��c��d��
/*
���磺
�����Ӣ����ĸ�ͱ���
����F�����J��
����f�����j��
����X�����B��
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
printf("������һ��Ӣ����ĸ����Сд�����ԣ�");
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
	printf("��������ֻ��չʾǰ����ȷ�Ĳ���\n");
	rewind(stdin);
	break;
	}
}
}
printf("\n");
return 0;
}