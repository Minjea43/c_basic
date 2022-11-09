#include<stdio.h>
// 과제 : 숫자 사용자 입력, 자리수 제한 없음

/**
 * 숫자 : 5자리 
*/

int main (void){
    int num;
    int total  = 0;

    printf("숫자를 입력하시오 : ");
    scanf("%d", &num);

    if(num>9999 && num<100000){
        for(int i =0; i<=5; i++){
            total += num % 10;
            num = num/10;
        }
        printf("%d\n", total);
    }
}
