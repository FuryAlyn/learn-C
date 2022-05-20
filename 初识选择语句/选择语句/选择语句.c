#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int 输入 = 0;

	printf("你选择做1还是0\n");
	scanf("%d", &输入);
	if (输入 == 1)
		printf("你是1\n");
	else
		printf("你是0\n");



	return 0;
}