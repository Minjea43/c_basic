#include<stdio.h>
int main(void){
    int num1 =20, num2 =10, num3 =50;
    int num_k;
    // 변수 3개에 각각 다른 값을 담음
    //  - 문제 : num1과 num2에 값을 바꿔(체인지)

    /**
     * 정렬 : num1 > num2 > num3
     * num1 < num2 ->값 교환 : num1 > num2
     * num1 < num3 -> 값 교환 : num1 > num2, num3
     * num2< num3 -> 값 교환 : num2 > num3
     * -> num1 > num2 > num3
    */

    if(num1<num2){
        num_k = num1;
        num1 = num2;
        num2 = num_k;
    }
    if(num1<num3){
        num_k = num1;
        num1 = num3;
        num3 = num_k;
    }
    if(num2<num3){
        num_k = num3;
        num3 = num2;
        num2 = num_k;
    }
    printf("num1 : %d > num2 : %d > num3 : %d\n", num1, num2, num3);

}