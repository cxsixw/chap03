/* ���ϸ�: assignment06.c
 * ����: PA06. ����Ʈ�� ������ ��������(��)�� �Է¹޾� �� ������ ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.4.3
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SQM_TO_PYEONG 0.3025

void convertArea() {
    double sqm, pyeong;

    printf("����Ʈ�� ����(��������)? ");
    scanf("%lf", &sqm);

    pyeong = sqm * SQM_TO_PYEONG;

    printf("%.2lf �������� = %.2lf ��\n", sqm, pyeong);
}

int main() {
    convertArea();
    return 0;
}
