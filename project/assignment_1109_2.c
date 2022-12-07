#include<stdio.h>
// 과제 : 자리수 제한 없는 상황에서도 똑같이 동작

int main (void){
    int num;
    int total  = 0;

    printf("숫자를 입력하시오 : ");
    scanf("%d", &num);

    while (num>0){
        total += num % 10;
        num = num/10;
    }
    printf("%d\n", total);

}
