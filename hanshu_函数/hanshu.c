#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�Զ��庯�����÷�
int Add(int x, int y)
{
	int Z = x + y;

	return Z;
}
int main()
{
	int sum = 0;
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);//scanf�����������һ������ֵ
	sum = Add(a, b);
	printf("sum = %d\n", sum);


	return 0;
}