/* ���ϸ�: assignment10.c
 * ����: PA10. 
 * �ۼ���: ������
 * ��¥: 2025.4.3
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Dollar();

int main(void)
{
	Dollar();
	return 0;
}

void Dollar()
{
	float a, b;

	printf("USD? ");
	scanf_s("%f", &a);

	printf("��/�޷� ȯ��? ");
	scanf_s("%f", &b);

	// % .2f == �Ҽ��� ��° �ڸ����� ���
	printf("USD %.2f = KRW %.2F", a, a * b);

	return;

}
