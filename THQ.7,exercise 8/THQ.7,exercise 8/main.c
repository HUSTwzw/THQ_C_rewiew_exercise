//������Ŀ����Ҫ���д����
/*
 ��д����void insert(char xx[])
 �书������xx��ָ����ַ����е����������ַ�֮ǰ�ֱ����1���ַ�'$'
 ���������ַ���
 */




#include<stdio.h>
void insert(char str[100]);
int main(void)
{
	char str[100]={'0'};
	printf("�������ַ���\n");
    gets(str);
	insert(str);
	puts(str);
	return 0;
}

void insert(char str[100])
{
	char s_t_r[100]="0";
	int i=0;
	int j=0;
	int k=0;
	for(i=0;str[i]!='\0';)
	{
	if (str[i]<48||str[i]>57)
	{
	s_t_r[j]=str[i];
	i++;
	j++;
	}
	else
	{
	s_t_r[j]='$';
	j++;
	s_t_r[j]=str[i];
	j++;
	i++;
	}
	}
	for(k=0;s_t_r[k]!='\0';k++)
	{
	str[k]=s_t_r[k];
	}
	str[k]='\0';
}