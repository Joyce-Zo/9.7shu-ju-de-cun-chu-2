#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С�˴洢");
	}
	else if (*p == 0)
	{
		printf("��˴洢");
	}

	return 0;
}

int check_sys1()
{
	int a = 1;
	char* p = (char*)&a;
	/*if (*p == 1)
	{
		return 1;
	}
	else if (*p == 0)
	{
		return 0;
	}*/
	  *p ֻ��0/1����1����1����0����0������һ��
	return *p;
}
int check_sys2()
{
	int a = 1;
	return *(char*)&a;
	     *     p
}
int main()
{
	int ret = check_sys2();
	if (ret == 1)
	{
		printf("С�˴洢");
	}
	else if (ret == 0)
	{
		printf("��˴洢");
	}
}

int main()
{
	char a = -1;
 100000000000000000000000000000001 ԭ
 111111111111111111111111111111110 ��
 111111111111111111111111111111111 ��
	 �洢��char���ͣ�ֻ��һ���ֽڣ�Ҫ�ضϳ�11111111 
��ӡ��%d ��������������������λ��
 111111111111111111111111111111111 ������ת����ԭ�룬��ԭ����ͬ�����-1
	signed char b = -1;
  ͬ��һ��11111111��һ���������������-1
	unsigned char c = -1;
 11111111
 �����������޷���������λ���Ƿ���λ�����Բ�0
 000000000000000000000000011111111 - ������ԭ������ͬ�����255
	printf("a=%d b=%d c=%d", a, b, c);
	return 0;
}

int main()
{
	char a = -128;
	 10000000000000000001000000 ԭ
	 11111111111111111110111111 ��
	 11111111111111111111000000 ��
	 �洢��char����нض�
	 1000000
	 ����������������λ1
	 11111111111111111111000000
	 ��ӡ%uʮ���Ƶ��޷������֣����������� ������ԭ������ͬ��ֱ�Ӵ�ӡ
	  �з��� char �ķ�Χ 128 - -127	
	  �޷��� char �ķ�Χ  0  -  255
	char b = 128;
	 00000000000000000001000000
	 10000000
	  ��signed char�й涨10000000Ϊ-128����������ͬ
	printf("%u\n", a);
	printf("%u\n", b);
	return 0;
}

int main()
{
	int i = -20;
	 10000000 00000000 00000000 00010100 ԭ
	 11111111 11111111 11111111 11101011 ��
	 11111111 11111111 11111111 11101100 ��
	unsigned j = 10;
	 00000000 00000000 00000000 00001010 ԭ��������	// Add
	 11111111 11111111 11111111 11110110 ���� -1 ȡ�� �� ԭ��
	 10000000 00000000 00000000 00001010 - -10

	printf("%d ", i + j);
	printf("%u ", i + j);
	return 0;
}
#include<windows.h>
int main()
{
	unsigned i = 9;
	for (i = 9; i >= 0; i--)
	{
		Sleep(1000);
		printf("%u\n", i);
	}
	return 0;
}
#include<string.h>
int main()
{
	int i = 5;
	char j[1000];
	j[1] = i;
	char arr[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		arr[i] = -1 - i;
	}	//  char���ͷ�Χ -128 - 127
	  -1 -2 -3... -128 -> 127 126 125 ... 2 1 0 -1 -2 ... -128 -> 127 126...ѭ��1000��
				128      +         127  =  255 
			strlen������һ��0 ('\0')��ֹͣ����255
	printf("%d ", strlen(arr));
	return 0;
}

unsigned char i = 0;
int main()
{
	int j = 1;
	for (i = 0; i <= 255; i++)
	{		// unsigned char ��Χ 0-255����С��255����ѭ��
		printf("Dove:%d\n",j++);
	}
	return 0;
}

#include<float.h>
		��	��	��	��	��	��	��	��	��	��
 int��char��unsigned�ķ�Χ������ limits.h �в鿴
 ������ double�� long double��float �ķ�Χ������ float.h ��鿴
 
int main()
{
	double d = 1E12;
	printf("%lf ", d);
	return 0;
}

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n	  =%d\n", n);
	printf("*pFloat=%f\n", *pFloat);

	*pFloat = 9.0;
	printf("n	  =%d\n", n);
	printf("*pFloat=%f\n", *pFloat);

	return 0;
}