#include<stdio.h>
int main()
{
	printf("%d\n",114514);//打印一个整数---%d
	//sizeof 计算类型或者变量所占空间的大小 单位是字节 byte=8bit
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}