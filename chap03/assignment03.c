/* ���ϸ�: assignment03.c
 * ����: PA03. ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.4.3
 * ����: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CalculatePotentialEnergy() {
    double mass, height, energy;
    const double g = 9.8;  // �߷� ���ӵ� (m/s��)

    printf("����(kg)? ");
    scanf("%lf", &mass);

    printf("����(m)? ");
    scanf("%lf", &height);

    energy = mass * g * height;

    printf("��ġ������: %lf J\n", energy);
}

int main() {
    CalculatePotentialEnergy();
    return 0;
}
