//������Ŀ��д����������������������
/*
������10��ְ����������ְ����
�ڰ�ְ������С������������˳����֮����
��Ҫ������һ��ְ���ţ����۰���ҷ��ҳ���ְ��������
*/




#include<stdio.h>
#include<string.h>
void input(int num[10],char name[10][20]);
void sequence(int num[10],char name[10][20]);
void search(int num[10],char name[10][20],int number);
int main(void)
{
int num[10]={0};
char name[10][20]={'0'};
int number=0;
char str[20]="yes";

input(num,name);
sequence(num,name);
for(;strcmp(str,"yes")==0;)
{
printf("������Ҫ���ҵ����\n");
scanf("%d",&number);
search(num,name,number);
printf("�����Ƿ�Ҫ���²��ң�yes/no��\n");
rewind(stdin);//��scanf("%d",&number)ʱ�ڻ��������»س�����Ҫ��ջ�����
gets(str);
}
return 0;
}


void input(int num[10],char name[10][20])
{
int i=0;
for(i=0;i<=9;i++)
{
printf("���������\n");
scanf("%d",&num[i]);
rewind(stdin);
printf("����������\n");
gets(*(name+i)+0);

}
}


void sequence(int num[10],char name[10][20])
{
int i=0;
int j=0;
int bri_num=0;
char bri_name[20]={'0'};
for(j=0;j<=8;j++)//ð�ݷ���С��������Ϊ����ʹ���۰뷨������ŵ춨����
{
for(i=0;i+j+1<=9;i++)
{
if(num[i]>num[i+1])
{
bri_num=num[i];
num[i]=num[i+1];
num[i+1]=bri_num;
strcpy(bri_name,name[i]);
strcpy(name[i],name[i+1]);
strcpy(name[i+1],bri_name);
}
}
}
}


void search(int num[10],char name[10][20],int number)
{
int top=0;
int bottom=9;
int average;
int k=0;
int j=0;
for(average=(top+bottom)/2;k<2&&(top<=bottom);)
{
if(number==num[average])
{

printf("��%d���ǣ�",number);
puts(*(name+average));
j=1;
break;
}
if(top==bottom)//��top==bottomʱ��ֱ�ӽ�����һ��ѭ�����жϴ�ʱ�Ƿ�����number==num[average]
{
k++;
continue;
}
if(number>num[average])//�۰���ҷ���û�ҵ�ʱ�Ĳ���
{
top+=1;
average=(top+bottom)/2;
}
if(number<num[average])//�۰���ҷ���û�ҵ�ʱ�Ĳ���
{
bottom-=1;
average=(top+bottom)/2;
}


}
if(j==0)
{
printf("û��������\n");
}
}