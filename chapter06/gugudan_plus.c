#include<stdio.h>
/**
 * ������ 2�� ~9�� ���
 * -> �ݺ��� 2��
 *      1. 2~9 1�� ���� : �ܼ�
 *      2. 1~9 1�� ���� : �ܼ��� �´� ������ ���
*/
int main(void){
    for (int i=1 ; i<=9; i++){
        for(int j=1; j<=9; j++)
            printf("%d * %d = %d\n", i, j, i*j);
    }
}