#include<stdio.h>
/**
 * �迭�� �ſ��� ���۹��� �ּ�
 *  �迭���� �ּ������� �����Ϳ� ���尡��
*/

int main(void){
    int ary[3];
    int *pa = ary;

    *pa = 10;                   //�迭�� ù��° ��ҿ� 10 �Է�
    *(pa + 1) = 20;             //�迭�� �ι�° ��ҿ� 20 �Է�
    pa[2] =pa[0] + pa[1];       //�迭�� ������ ��ҿ� 30 �Է�
/**
 * �迭�� [�ε��� ��ȣ] : �ش� �� ȣ��
 * ary[0], ary[1], ary[2] : (o)
 * pa[0], pa[1], pa[2] : (o) #�迭�̸� =�����ּ� = ������
 * 
 * �迭�� �ε�����ȣ�� 0���� ����
 * ary[99] : �迭�� ũ��(ĭ��) : 99ĭ
 *           �迭�� �ε��� ����
*/
    for(int i=0; i<3; i++){
        printf("%d", pa[i]);
    }
}