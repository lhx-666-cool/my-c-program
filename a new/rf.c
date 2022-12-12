#include"Windows.h"
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	float x, y, a;
	for (float y = 1.5;y > -1.3;y -= 0.1) {
		for (float x = -1.5;x < 1.5;x += 0.05)
		{
			float a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y < 0.0 ? '*' : ' ');
		}
		Sleep(100);//�ڴ˴��޸�ÿ�д�ӡʱ�� 
		system("color 0c");//�ڴ˴��޸ı�����ɫ�Ͱ�����ɫ 
		putchar('\n');
	}
	printf("                            ɵ��¥����\n");//��������д����Ҫ����˵�Ļ� 
	system("pause");


	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ���������룺�ķ�����ã���ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "�ķ������") == 0)
	{
		system("shutdown -a");
	} else {
		goto again;
	}
	return 0;
}