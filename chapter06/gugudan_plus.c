#include<stdio.h>
/**
 * 구구단 2단 ~9단 출력
 * -> 반복문 2개
 *      1. 2~9 1씩 증가 : 단수
 *      2. 1~9 1씩 증가 : 단수에 맞는 구구단 출력
*/
int main(void){
    for (int i=1 ; i<=9; i++){
        for(int j=1; j<=9; j++)
            printf("%d * %d = %d\n", i, j, i*j);
    }
}