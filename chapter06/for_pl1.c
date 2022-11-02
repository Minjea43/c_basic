#include<stdio.h>
//1~10의 값의 총합 계산
int main(void){
    int sum = 0;
    for (int i = 0; i <=10; i++){
        sum += i;
    }
    printf("누적 총합 : %d\n", sum);
}
