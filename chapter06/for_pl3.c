#include<stdio.h>
//1~10ÀÇ °ªÀÇ ÃÑÇÕ °è»ê
int main(void){
    for (int i = 1; i<=10; i++){
        if(i% 2)
            printf("È¦¼ö %d\t", i);
        else
            printf("Â¦¼ö %d\t", i);
    }
}