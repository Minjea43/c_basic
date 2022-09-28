/**
 * 실수형
 *  + float(7), double(15), long double(15~)
 *  + 값의 범위보다 유효숫자(소수점) 갯수가 즁요
 *  + 정수형을 기본으로, 실수형은 꼭 필요한 경우만
 *  + 실수형은 유효숫자가 많은 double을 기본으로 사용
 * 
*/
#include<stdio.h>
int main(void){
    float ft =  1.2345678901234567890;
    double db = 1.2345678901234567890;

    printf("float형 변수값 : %.20f\n",ft);
    printf("double형 변수값 : %.20f\n",db);
    return 0;
}