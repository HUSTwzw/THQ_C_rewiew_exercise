//������Ŀ������ʮ������������С�������У��ֱ�ʹ����������ʽ��
/*
����ʽ�٣�ð�ݷ�
����ʽ�ڣ�ѡ��
����ʽ�ۣ�ϣ����
*/




//ð�ݷ�
/*
#include<stdio.h>
int main(void)
{
int arr[10]={0};
int i=0;
int j=0;
int k=0;
int m=0;
printf("������10����\n");
for(i=0;i<=9;i++)
{
scanf("%d",&arr[i]);
}
for(j=0;j<9;j++)
{
for(i=0;i<9-j;i++)
{
if(arr[i]>arr[i+1])
{
m=arr[i];
arr[i]=arr[i+1];
arr[i+1]=m;
}
}
}
for(k=0;k<10;k++)
{
printf("%d  ",arr[k]);
}
printf("\n");
return 0;
}
*/





//ѡ��
/*
#include<stdio.h>
int main(void)
{
int arr[10]={0};
int i=0;
int min=0;
int j=0;
int bridge=0;
int k=0;
int p=0;
int q=0;
int m=0;
int n=0;

printf("������10����\n");
for(;m<10;m++)
{
scanf("%d",&arr[m]);
}


for(;p<9;p++)
{
for(min=arr[i];i<=9;i++)
{
if(arr[i]<min)
{
min=arr[i];
}

}

for(j=q;(arr[j]!=min)&&j<=9;j++)//j���ܴ�0��ʼ������������С��ͬʱ�����
//��������Ϊ2��2��23��34��32��2��5��53��27��8ʱ����ʱǰ�������Ѿ�����Сֵ����Ҫ��ʣ�����Сֵ����ǰ����λ������2���ŵ�����λ������Ҫ�ӵ���λ��ʼ����Ѱ����Сֵ����j=q����
//���ӵ�һλ��ʼ��j=0�����ͻ�ֱ���ҵ�ǰ��Ĵ�С��ͬ��������ǰ��һλ������2�����ͻᷢ������
{

}
bridge=arr[k];
arr[k]=arr[j];
arr[j]=bridge;
k++;

q++;
i=q;

}


for(;n<10;n++)
{
printf("%d  ",arr[n]);
}

return 0;
}
*/





//���뷨
/*
#include<stdio.h>
int main(void)
{
int arr[10]={0};
int a_r_r[10]={0};
int i=0;
int j=1;
int bridge=0;
int stake=0;
int k=1;
int h=0;
int a=0;
int b=0;



printf("������10����\n");
for(b=0;b<10;b++)
{
scanf("%d",&arr[b]);
}

for(;k<10;)
{
for(;;)
{
if(arr[i]>arr[j]&&i>=1)
{
i--;
}
else if(arr[i]>arr[j]&&i==0)
{
j=i;
break;
}
else if(arr[i]<=arr[j]&&i>=0)
{
j=i+1;
break;
}
}
for(a=0;a<10;a++)
{
a_r_r[a]=arr[a];
}
for(h=j,stake=arr[k];k!=j;j++)//�˴�k!=j���������ã����ģ���
//����arr[k]���ʹ�����ȷ��λ�ã���jλ���ӵ�0λ��ʼ�㣩��������Ҫ�Ժ�������ֽ����ƶ���
//����arr[k]Ӧ�÷ŵ�ǰ�棨��jλ���ӵ�0λ��ʼ�㣩�����Ǿͽ���j��k-1λ�ƶ�����j+1λ��kλ������ԭ���ĵ�kλ�ƶ�����jλ��
//����ϣ��ԭ����kλ���Ժ��λ���ƶ�����һλ������Ҫʹj!=k����ֹj++��ѭ��
{
arr[j+1]=a_r_r[j];
}
arr[h]=stake;
k++;
i=k-1;
j=k;
}

for(b=0;b<10;b++)
{
printf("%d  ",arr[b]);
}
return 0;
}
*/