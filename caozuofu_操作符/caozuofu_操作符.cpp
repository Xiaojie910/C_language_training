#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��λ������
//int main()
//{
//	//��λ��2����λ��������
//	//<< ����
//	//>> ����
//	int a = 1;
//	//����1վ4���ֽ�--32bitλ
//	//00000000000000000000000000000001
//	int b = a << 2;
//	printf("%d\n", b);
//	printf("%d\n", a);//��λ�������ı�
//	return 0;
//}


////λ������
//int main()
//{
//	//(2����)λ����
//	//&��λ�����
//	//|��λ�����
//	int a = 3;//3-- 0 1 1
//	int b = 5;//5-- 1 0 1
//	int c = a & b;//0 0 1--1
//	printf("%d\n", c);
//	int d = a ^ b;//1 1 0--6
//	printf("%d\n", d);//^��λ������--��Ӧ��2����λ��ͬ��Ϊ0����Ӧ��2����λ����Ϊ1
//	return 0;
//}


//��Ŀ������ sizeof ������--������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
int main()
{
	int a = 10;
	int arr[10] = { 0 };//10������Ԫ�ص�����,40�ֽ�
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);//10��Ԫ��
	printf("%d\n", sizeof(a));//4�ֽ�
	printf("%d\n", sizeof(int));//����Ҳ��4�ֽ�
	printf("%d\n", sizeof a);//4�ֽ�
	printf("%d\n", sizeof(arr));//40�ֽ�
	printf("%d\n", sz);//10��Ԫ��
	

	return 0;
}
