#include<stdio.h>
// ���� : �ڸ��� ���� ���� ��Ȳ������ �Ȱ��� ����

int main (void){
    int num;
    int total  = 0;

    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf("%d", &num);

    while (num>0){
        total += num % 10;
        num = num/10;
    }
    printf("%d\n", total);

}
