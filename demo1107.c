//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//
//2.ʹ�ú���ʵ���������Ľ�����
//
//3.ʵ��һ�������ж�year�ǲ������ꡣ
//
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//
//5.ʵ��һ���������ж�һ�����ǲ���������
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void multiplication(int x)
{
	printf("������������->");
	scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, i*j);
		}
		printf("\n");
	}
}
void Exchange(int x,int y)
{
	printf("������������->");
	scanf("%d %d", &x,&y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d %d\n", x,y);
}
void Year(int x)
{
	printf("���������>");
	scanf("%d", &x);
	if(x % 400 == 0 || (x % 100 != 0 && x % 4 == 0))
	{
		printf("%d������\n",x);
	}
	else
	{
		printf("%d��������\n", x);
	}
}
void init(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}
void empty(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[],int left,int right)
{
	printf("������ʮ����->");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	while (left <=right)
	{
		int a = arr[left];
		arr[left] = arr[right];
		arr[right] = a;
		left++;
		right--;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void prime_number(int x)
{
	printf("������һ����>");
	scanf("%d", &x);
	while (1)
	{
		int c = 0;
		if (x == 1)
		{
			printf("%d��������Ҳ���Ǻ���\n", x);
			break;
		}
		if (x == 2)
		{
			printf("%d������\n", x);
			break;
		}
		for (int i = 2; i < sqrt(x); i++)
		{
			if (x%i == 0)
			{
				c++;
			}
		}
		if (c == 0)
		{
			printf("%d������\n", x);
			break;
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int x=0;
	int y=0;
	multiplication(x);//x��ʾ������
	Exchange(x,y);//x,yҪ��������
	Year(x);//�ж�����
	init (arr);//��ʼ������
	empty(arr);//�������
	reverse(arr,left,right);//����
	prime_number(x);//����
    system("pause");
    return 0;
}