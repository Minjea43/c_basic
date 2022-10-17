#include<stdio.h>
int main(void){
    int num1, num2;
    printf("첫번쨰 수 : ");
    scanf("%d", &num1);
    printf("두번째 수 : ");
    scanf("%d", &num2);

    printf("%d, %d\n", num1, num2);

    if(num1>num2){
        printf("%d가 %d보다 크다", num1, num2);
    }else if(num1<num2){
        printf("%d가 %d보다 크다", num2, num1);
    }else{
        printf("첫번째 수와 두번째 수가 같습니다");
    }
    /**
     * 조건
     * 1. 수 1이 수 2보다 큰 경우 출력
     * 1. 수 1이 수 2보다 작은 경우 출력
     * 1. 수 1이 수 2랑 같은 경우 출력
    */
}