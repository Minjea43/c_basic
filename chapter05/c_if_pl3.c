#include<stdio.h>
int main(void){
    int num1, num2;
    printf("ù���� �� : ");
    scanf("%d", &num1);
    printf("�ι�° �� : ");
    scanf("%d", &num2);

    printf("%d, %d\n", num1, num2);

    if(num1>num2){
        printf("%d�� %d���� ũ��", num1, num2);
    }else if(num1<num2){
        printf("%d�� %d���� ũ��", num2, num1);
    }else{
        printf("ù��° ���� �ι�° ���� �����ϴ�");
    }
    /**
     * ����
     * 1. �� 1�� �� 2���� ū ��� ���
     * 1. �� 1�� �� 2���� ���� ��� ���
     * 1. �� 1�� �� 2�� ���� ��� ���
    */
}