#include<stdio.h>
int main()
{
	printf("%d\n",114514);//��ӡһ������---%d
	//sizeof �������ͻ��߱�����ռ�ռ�Ĵ�С ��λ���ֽ� byte=8bit
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}