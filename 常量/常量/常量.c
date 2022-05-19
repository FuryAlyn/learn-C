#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//字面常量
	3.14;
	"a";
	"abc";
	//const修饰的常变量
	//若加修饰const int num num则为常变量
	int num = 114514;
	//变量
	num = 19191810;
	printf("num=%d\n", num);//1919810

	//#define定义的标识常量
	//比如 #define max 987676

	//列举常量 比如男女

	return 0;
}