/* ���ϸ�: assignment01.c
 * ����: PA01. �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.4.3
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculateSquare() {
    int side;

    printf("�� ���� ���̸� �Է��ϼ���: ");
    scanf("%d", &side);

    printf("\n=== ���簢�� ���� ===\n");
    printf("����: %d\n", side * side);
    printf("�ѷ�: %d\n", 4 * side);
}

int main() {
    calculateSquare();  // �Լ� ȣ��
    return 0;
}
