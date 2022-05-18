#include<stdio.h>
//在这定义就是全局变量，比如
int a = 100;
int main()
{
	//在大括号内部定义的都是局部变量
	int a = 10;\
		printf("%d\n", a);
	//当这俩冲突时候并不是局部牺牲小我服从全局，而是按局部 比较反直觉
	return 0;

}