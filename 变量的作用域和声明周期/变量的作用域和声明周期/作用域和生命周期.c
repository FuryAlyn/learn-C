#define _CRT_SECURE_NO_WARNINGS 1

//但是全局变量声明之后可以整个工程上用
extern int gnai;
#include<stdio.h>
int main()
{
	int a = 10;
	printf("a=%d\n",a);
	return 0;
	//局部作用域只局限于所在的大括号
}

//变量的生命周期：变量创建到销毁的时间段