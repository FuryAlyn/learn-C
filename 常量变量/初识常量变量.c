#include<stdio.h>
int main()
{
	//创建一个变量
	//创建变量时候最好给一个初始化的值

	int age = 30;
	double weight = 71.6;
	//变量是可以变动的 比如例子的年龄，体重
	age = age+1;
	weight = weight - 0.1;
	printf("%d\n", age);
	printf("%lf\n",weight);
	//双精度用lf 单精度用f 整型用d
	return 0;
}