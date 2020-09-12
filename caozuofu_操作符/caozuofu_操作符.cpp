#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//移位操作符
//int main()
//{
//	//移位（2进制位）操作符
//	//<< 左移
//	//>> 右移
//	int a = 1;
//	//整型1站4个字节--32bit位
//	//00000000000000000000000000000001
//	int b = a << 2;
//	printf("%d\n", b);
//	printf("%d\n", a);//移位后本身并不改变
//	return 0;
//}


////位操作符
//int main()
//{
//	//(2进制)位操作
//	//&按位与操作
//	//|按位或操作
//	int a = 3;//3-- 0 1 1
//	int b = 5;//5-- 1 0 1
//	int c = a & b;//0 0 1--1
//	printf("%d\n", c);
//	int d = a ^ b;//1 1 0--6
//	printf("%d\n", d);//^按位异或操作--对应的2进制位相同则为0，对应的2进制位相异为1
//	return 0;
//}


//单目操作符 sizeof 操作符--计算的是变量/类型所占空间的大小，单位是字节
int main()
{
	int a = 10;
	int arr[10] = { 0 };//10个整型元素的数组,40字节
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);//10个元素
	printf("%d\n", sizeof(a));//4字节
	printf("%d\n", sizeof(int));//整型也是4字节
	printf("%d\n", sizeof a);//4字节
	printf("%d\n", sizeof(arr));//40字节
	printf("%d\n", sz);//10个元素
	

	return 0;
}
