/* ���ϸ�: assignment02.c
 * ����: PA02. ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.4.3
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculateRectangle() {
    int width, height;

    printf("������ ����? ");
    scanf("%d", &width);

    printf("������ ����? ");
    scanf("%d", &height);

    printf("���簢���� ����: %d\n", width * height);
    printf("���簢���� �ѷ�: %d\n", 2 * (width + height));
}

int main() {
    calculateRectangle();  // �Լ� ȣ��
    return 0;
}