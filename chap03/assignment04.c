/* ���ϸ�: assignment04.c
 * ����: PA04. ��ü�� ������ ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.4.3
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculateWork() {
    double force, distance, work;

    printf("��(N)? ");
    scanf("%lf", &force);

    printf("�̵��Ÿ�(m)? ");
    scanf("%lf", &distance);

    work = force * distance;

    printf("���� ��: %.2lf J\n", work);
}

int main() {
    CalculateWork();
    return 0;
}
