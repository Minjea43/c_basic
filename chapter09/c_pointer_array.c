#include<stdio.h>
/**
 * 포인터와 배열
 * 
*/
int main(void){
    int ary[3];     //배열 선언 (3칸) 크기 : 4byte
    int i;          //변수 : 4byte

//배열 이름 : 배열의 사작번지 값을 담고있음
    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("3번쨰 배열 요소 입력 : ");
    scanf("%d\n", ary + 2);

    for(i=0; i<3; i++){
        printf("%d", *(ary+i));
    }
}