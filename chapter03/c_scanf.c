#include<stdio.h>
//scanf()
//  + Ű����κ��� ���� �Է�
/**
 * cpu : �߾�ó����ġ
 * RAM : ���θ޸�
 * SSD : �����޸�
 * �� ���̸��� ���α׷� ���� ���
 * cpu - ram - ssd
*/
int main(void){
    int age;

    // age ȣ�� => 4��
    printf("%d\n", age);// age�� ����ִ� �� = 4
    printf("���� :");
    scanf("%d", &age);
    printf("%d", age); // age ������ �޸� �ּ�
}