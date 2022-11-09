/**
 * 반복문
 *    - 조건을 만족하는 동안 반복해서 싫실행
 *  
 * 1) while문 : 반복횟수 모름
 * 2) for문   : 반복횟수가 정해진 경우
 * 
 * 예 : 키오스크 : while문
*/
#include<stdio.h>
int main(void){
    int a =1;

    while(a < 10){
        a=a*2;
    }
    printf("a : %d\n",a);

}