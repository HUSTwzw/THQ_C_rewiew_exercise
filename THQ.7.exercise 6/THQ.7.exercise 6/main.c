#include<stdio.h>
void output(int n);
int main(void)
{
int num=0;
printf("����������\n");
scanf("%d",&num);
if(num<0)
{
printf("-");//�������
printf(" ");
num=num*-1;
}
output(num);
printf("\n");
return 0;
}


void output(int n)//�����ݹ�˳����521Ϊ����
/*
��output��521)------------->��output��52��------------>��output(5)
                                                       ��printf("c",5%10+48);
							                           ��printf(" ");
                            ��printf("%c",52%10+48);       
			                ��printf(" ");
��printf("%c",521&10+48);
��printf(" ");
*/

{
int i=0;
if((i=n/10)>0)
{
output(i);
}
printf("%c",n%10+48);//��������ַ�
printf(" ");//����ո�
}