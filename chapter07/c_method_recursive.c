/**
 * 재귀함수 (recursive function)
 * - 자기자신을 다시 호출하는 함수
*/

#include<stdio.h>
void fruit(void);

int main(void){
    fruit();
}
/**
 * 무한 반복 호출하는 재귀함수
 * - 절대 사용 금지 
 * - Fatal error
*/
void fruit(void){
    printf("apple\n");
    fruit();
}