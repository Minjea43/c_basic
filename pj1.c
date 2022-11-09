#include<stdio.h>
/**
 * 숫자 : 5자리 
 * 
 * 
*/
int main (void){
    int num = 56342;
    int total  = 0;
    int sum;

    for(int i =0; i<=5; i++){
        sum += num % 10;
        num = num/10;
    }
    printf("%d\n", sum);
}
