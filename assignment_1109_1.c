#include<stdio.h>
// ���� : ���� ����� �Է�, �ڸ��� ���� ����

/**
 * ���� : 5�ڸ� 
*/

int main (void){
    int num;
    int total  = 0;

    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf("%d", &num);

    if(num>9999 && num<100000){
        for(int i =0; i<=5; i++){
            total += num % 10;
            num = num/10;
        }
        printf("%d\n", total);
    }
}
