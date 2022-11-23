#include<stdio.h>
/**
 * 포인터 (pointer) or 포인터 변수
 *  - 변수의 메모리 주소를 저장하는 변수
 * 일반 변수
 *    - 실제 값을 저장하는 변수
 * 
*/

int main (void){
    int a;
    int *pa;    // 포인터 변수 (변수 앞에 *붙이면)

    pa = &a;// &a -> a 변수의 시작 번지(10번지)
            // pa = a 변수의 시작번지 (10번지)
            // pa (10번지)
    // pa (10번지) -> 10번지 주소에 값 (33)을 입력
    *pa = 33;
    printf("포인터로 a 값을 출력 : %d\n", *pa);
    printf("일반변수 a 값을 출력 : %d\n", a);

    /**
     * 포인터 (*)의 의미 2개
     * 1. 변수 선언할떄 *을 붙이면 -> 포인터 변수
     * 2. 대입 연산자(=)와 함꼐 사용하면 -> *pa 실제 주소에 값을 넣기
    */
}