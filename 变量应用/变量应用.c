#define _CRT_SECURE_NO_WARNINGS 1
//ֱ�ӱ���ᱨ��˵scanf����ȫ������ʹ�ã����԰���ʾ��������⸴�Ƶ���һ�ж���1ǿ��ͨ��
#include<stdio.h>\
//�����������ĺ�
int main()
{
	int a = 114514;
	int b = 1919810;
	int sum = 0;
	//���ﲻ�Ƕ���ab��ֵ��sum�Ľ����ֻ��Ϊ���Ͻ�����㶨��һ����ʼֵ
	//��ͬ���������printf scanf���������
	scanf("%d %d",&a, &b);
	//&��ȡ��ַ����˼���������ͷֱ��Ž���ͬ�ĵ�ַ
	sum = a + b;
	printf("%d\n", sum);

	return 0;
}