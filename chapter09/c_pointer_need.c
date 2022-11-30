#include<stdio.h>
/**
 * 포인터를 사용하는 이유
 * - 변수를 사용하는 가장 쉬운방법은 변수이름 호출 (int num = 4 -> num)
 * - 포인터 사용 -> 추가적으로 변수선언, 주소연산, 간접참조 등 각종연산 수행해야함
 * - 포인터를 즐겨 사용할 필요 없음
 * - 임베디드 프로그래밍 할 때 메모리에 직접 접근한느 경우 또는 동적 할당 메몰리를 사용하는 경우에는 포인터가 반드시 필요함
*/

int main(void){
    int a =10, b=20;
    int temp;

    /**
     * 함수의 매개변수 전달 할 떄 방법 3가지
     * 1. call by value: c언어 값을 복사 전달
     * 2. call by reference :java 언어, 값이 위치한 주소를 전달
     * 3. call by assignment:python언어, 자료형에 따라 1번 2번 사용
    */
    swap(&a, &b);
    printf("a:%d, b: %d\n", a,b);
}
/**
 * 교환 swap 작업은 swap함수 내에ㅓ 포인터를 통해 진행되지만 실제로 바뀌는 값은 main함수의 변수 a와 b
 * swap함수는 포인터를 통해 main함수의 변수 a,b를 굥유(두 변수를 직접 바꾸는 일 가능)
 * - c언어가 call by value기 떄문에 포인터를 사용하지 않고 값을 전달하면 값이 copy 돼어 전달되기 떄문에 공유 불가
*/

void swap (int *pa, int *pb){
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb =  temp;
}