#include<stdio.h>
/**
 * �Ϲ� ���� vs ������ ����
 * 
 * int a;       # 21���� ~ 24����
 * int *pa;
 * pa = &a;
 * *pa = 55;
*/

int main(void){

    int a =10, b = 15, total;   //31, 32, 33����
    double avg;                 //34����
    int *pa, *pb;
    int *pt = &total;           //33����
    double *pg = &avg;          //34����

    pa = &a;                    //31����
    pb = &b;                    //32����

    *pt = *pa + *pb;            // *pt = total = 10 +15 = 25
    *pg = *pt / 2.0;            // *pg = avg = 25/2.0 = 12.5

    printf("�� ������ �� : %d, %d\n", *pa, *pb);
    printf("�� ������ �� :  %d\n", *pt);
    printf("�� ������ ��� : %.1lf\n", *pg);
}