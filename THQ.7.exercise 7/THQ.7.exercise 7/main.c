//程序题目：写几个函数，满足以下条件
/*
①输入10个职工的姓名和职工号
②按职工号由小到大排序，姓名顺序随之调整
③要求输入一个职工号，用折半查找法找出该职工的姓名
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
printf("请输入要查找的序号\n");
scanf("%d",&number);
search(num,name,number);
printf("请问是否要重新查找（yes/no）\n");
rewind(stdin);//在scanf("%d",&number)时在缓冲区留下回车，需要清空缓冲区
gets(str);
}
return 0;
}


void input(int num[10],char name[10][20])
{
int i=0;
for(i=0;i<=9;i++)
{
printf("请输入序号\n");
scanf("%d",&num[i]);
rewind(stdin);
printf("请输入姓名\n");
gets(*(name+i)+0);

}
}


void sequence(int num[10],char name[10][20])
{
int i=0;
int j=0;
int bri_num=0;
char bri_name[20]={'0'};
for(j=0;j<=8;j++)//冒泡法从小到大排序，为后面使用折半法查找序号奠定基础
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

printf("第%d号是：",number);
puts(*(name+average));
j=1;
break;
}
if(top==bottom)//当top==bottom时，直接进入下一次循环，判断此时是否满足number==num[average]
{
k++;
continue;
}
if(number>num[average])//折半查找法还没找到时的操作
{
top+=1;
average=(top+bottom)/2;
}
if(number<num[average])//折半查找法还没找到时的操作
{
bottom-=1;
average=(top+bottom)/2;
}


}
if(j==0)
{
printf("没有这个序号\n");
}
}