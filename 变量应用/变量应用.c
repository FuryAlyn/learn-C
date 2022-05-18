#define _CRT_SECURE_NO_WARNINGS 1
//直接编译会报错说scanf不安全不建议使用，可以按提示把这个玩意复制到第一行定义1强行通过
#include<stdio.h>\
//求两个整数的和
int main()
{
	int a = 114514;
	int b = 1919810;
	int sum = 0;
	//这里不是定义ab的值和sum的结果，只是为了严谨而随便定义一个初始值
	//不同于输出函数printf scanf是输出函数
	scanf("%d %d",&a, &b);
	//&是取地址的意思，两个整型分别存放进不同的地址
	sum = a + b;
	printf("%d\n", sum);

	return 0;
}