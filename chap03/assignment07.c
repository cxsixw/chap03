/* ���ϸ�: assignment07.c
 * ����: PA07. ����Ʈ�� ������ ��������(��)�� �Է¹޾� �� ������ ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.4.3
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculateExponent() {
    double number, square, cube;

    printf("�Ǽ�?");
    scanf("%lf", &number);

    square = number * number;
    cube = number * number * number;

    printf("����: %e\n", square);
    printf("������: %e\n", cube);
}

int main() {
    calculateExponent();
    return 0;
}
