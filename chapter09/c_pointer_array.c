#include<stdio.h>
/**
 * �����Ϳ� �迭
 * 
*/
int main(void){
    int ary[3];     //�迭 ���� (3ĭ) ũ�� : 4byte
    int i;          //���� : 4byte

//�迭 �̸� : �迭�� ���۹��� ���� �������
    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("3���� �迭 ��� �Է� : ");
    scanf("%d\n", ary + 2);

    for(i=0; i<3; i++){
        printf("%d", *(ary+i));
    }
}