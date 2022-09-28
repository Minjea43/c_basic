#include<stdio.h>
//scanf()
//  + 키보드로부터 값을 입력
/**
 * cpu : 중앙처리장치
 * RAM : 메인메모리
 * SSD : 보조메모리
 * 폰 노이만의 프로그램 내장 방식
 * cpu - ram - ssd
*/
int main(void){
    int age;

    // age 호출 => 4값
    printf("%d\n", age);// age에 들어있는 값 = 4
    printf("나이 :");
    scanf("%d", &age);
    printf("%d", age); // age 변수의 메모리 주소
}