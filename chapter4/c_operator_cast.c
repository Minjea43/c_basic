/**
 * casting : ����ȯ
 * int (����) -> double(�Ǽ�)
 * 
*/


#include<stdio.h>
int main (void){
    int a=20, b=3;
    double res;

    //6.7 = 20.0/3.0
    //int -> double (����type ->ūtype)
    //double -> int (ūtype -> ����type) : ���� �ս�

    res = (double)a / (double)b;
    printf("a=%d, b=%d\n",a,b);
    printf("a/b�� ��� : %.1f\n",res);

    a=(int)res;
    printf("(int) %.1f�� ��� : %d\n",res,a);
}