#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("小端存储");
	}
	else if (*p == 0)
	{
		printf("大端存储");
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
	  *p 只有0/1，是1返回1，是0返回0，整合一下
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
		printf("小端存储");
	}
	else if (ret == 0)
	{
		printf("大端存储");
	}
}

int main()
{
	char a = -1;
 100000000000000000000000000000001 原
 111111111111111111111111111111110 反
 111111111111111111111111111111111 补
	 存储到char类型，只有一个字节，要截断成11111111 
打印成%d 进行整型提升，按符号位补
 111111111111111111111111111111111 补，再转化成原码，与原来相同，结果-1
	signed char b = -1;
  同理，一样11111111，一样整型提升，结果-1
	unsigned char c = -1;
 11111111
 整型提升，无符号数，高位不是符号位，所以补0
 000000000000000000000000011111111 - 正数，原反补相同，结果255
	printf("a=%d b=%d c=%d", a, b, c);
	return 0;
}

int main()
{
	char a = -128;
	 10000000000000000001000000 原
	 11111111111111111110111111 反
	 11111111111111111111000000 补
	 存储在char里，进行截断
	 1000000
	 整型提升，按符号位1
	 11111111111111111111000000
	 打印%u十进制的无符号数字，所以上面是 正数，原反补相同，直接打印
	  有符号 char 的范围 128 - -127	
	  无符号 char 的范围  0  -  255
	char b = 128;
	 00000000000000000001000000
	 10000000
	  在signed char中规定10000000为-128，与上面相同
	printf("%u\n", a);
	printf("%u\n", b);
	return 0;
}

int main()
{
	int i = -20;
	 10000000 00000000 00000000 00010100 原
	 11111111 11111111 11111111 11101011 反
	 11111111 11111111 11111111 11101100 补
	unsigned j = 10;
	 00000000 00000000 00000000 00001010 原、反、补	// Add
	 11111111 11111111 11111111 11110110 补码 -1 取反 得 原码
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
	}	//  char类型范围 -128 - 127
	  -1 -2 -3... -128 -> 127 126 125 ... 2 1 0 -1 -2 ... -128 -> 127 126...循环1000次
				128      +         127  =  255 
			strlen遇到第一个0 ('\0')就停止，共255
	printf("%d ", strlen(arr));
	return 0;
}

unsigned char i = 0;
int main()
{
	int j = 1;
	for (i = 0; i <= 255; i++)
	{		// unsigned char 范围 0-255，恒小于255，死循环
		printf("Dove:%d\n",j++);
	}
	return 0;
}

#include<float.h>
		浮	点	型	在	内	存	中	的	存	储
 int、char、unsigned的范围可以在 limits.h 中查看
 浮点型 double、 long double、float 的范围可以在 float.h 里查看
 
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