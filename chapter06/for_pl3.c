#include<stdio.h>
//1~10�� ���� ���� ���
int main(void){
    for (int i = 1; i<=10; i++){
        if(i% 2)
            printf("Ȧ�� %d\t", i);
        else
            printf("¦�� %d\t", i);
    }
}