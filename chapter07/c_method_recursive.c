/**
 * ����Լ� (recursive function)
 * - �ڱ��ڽ��� �ٽ� ȣ���ϴ� �Լ�
*/

#include<stdio.h>
void fruit(void);

int main(void){
    fruit();
}
/**
 * ���� �ݺ� ȣ���ϴ� ����Լ�
 * - ���� ��� ���� 
 * - Fatal error
*/
void fruit(void){
    printf("apple\n");
    fruit();
}