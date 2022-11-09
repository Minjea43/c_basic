#include<stdio.h>
//Â¦¼ö ÃÑÇÕ, È¦ÃÊ ÃÑÇÕÀ» °è»ê(1~100)

int main(void){
    int even_total = 0;
    int odd_total = 0;

    //for ¹®
    for(int i=1; i <=100; i++){
        if(i%2==0){
            even_total += i;
        } else {
            odd_total += i;
        }
    }
    printf("Â¦¼ö : %d\nÈ¦¼ö : %d\n", even_total, odd_total);

    //while¹®
    int num = 1;
    while(num<=100){
        if(num % 2==0){
            even_total += num;
        } else {
            odd_total += num;
        }
        num ++;
    }
}