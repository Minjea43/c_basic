#include<stdio.h>
/**
 * ������ (pointer) or ������ ����
 *  - ������ �޸� �ּҸ� �����ϴ� ����
 * �Ϲ� ����
 *    - ���� ���� �����ϴ� ����
 * 
*/

int main (void){
    int a;
    int *pa;    // ������ ���� (���� �տ� *���̸�)

    pa = &a;// &a -> a ������ ���� ����(10����)
            // pa = a ������ ���۹��� (10����)
            // pa (10����)
    // pa (10����) -> 10���� �ּҿ� �� (33)�� �Է�
    *pa = 33;
    printf("�����ͷ� a ���� ��� : %d\n", *pa);
    printf("�Ϲݺ��� a ���� ��� : %d\n", a);

    /**
     * ������ (*)�� �ǹ� 2��
     * 1. ���� �����ҋ� *�� ���̸� -> ������ ����
     * 2. ���� ������(=)�� �Բ� ����ϸ� -> *pa ���� �ּҿ� ���� �ֱ�
     * *pa == a ����
    */
}