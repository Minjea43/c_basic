/**
 * casting : 형변환
 * int (정수) -> double(실수)
 * 
*/


#include<stdio.h>
int main (void){
    int a=20, b=3;
    double res;

    //6.7 = 20.0/3.0
    //int -> double (작은type ->큰type)
    //double -> int (큰type -> 작은type) : 값의 손실

    res = (double)a / (double)b;
    printf("a=%d, b=%d\n",a,b);
    printf("a/b의 결과 : %.1f\n",res);

    a=(int)res;
    printf("(int) %.1f의 결과 : %d\n",res,a);
}