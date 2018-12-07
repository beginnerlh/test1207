//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//
//2.使用函数实现两个数的交换。
//
//3.实现一个函数判断year是不是润年。
//
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//
//5.实现一个函数，判断一个数是不是素数。
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void multiplication(int x)
{
	printf("请输入行列数->");
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
	printf("请输入两个数->");
	scanf("%d %d", &x,&y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d %d\n", x,y);
}
void Year(int x)
{
	printf("请输入年份>");
	scanf("%d", &x);
	if(x % 400 == 0 || (x % 100 != 0 && x % 4 == 0))
	{
		printf("%d是闰年\n",x);
	}
	else
	{
		printf("%d不是闰年\n", x);
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
	printf("请输入十个数->");
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
	printf("请输入一个数>");
	scanf("%d", &x);
	while (1)
	{
		int c = 0;
		if (x == 1)
		{
			printf("%d不是素数也不是合数\n", x);
			break;
		}
		if (x == 2)
		{
			printf("%d是素数\n", x);
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
			printf("%d是素数\n", x);
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
	multiplication(x);//x表示行列数
	Exchange(x,y);//x,y要交换的数
	Year(x);//判断闰年
	init (arr);//初始化数组
	empty(arr);//清空数组
	reverse(arr,left,right);//逆序
	prime_number(x);//素数
    system("pause");
    return 0;
}