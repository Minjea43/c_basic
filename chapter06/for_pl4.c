#include<stdio.h>
// i =1 8
// i =2 **
// i =3 ***
// i =4 ****
// i =5 *****
int main (void){
    for (int i =1; i<=5; i++){
        for (int j =0; j<i; j++){
            printf("*");
        }
    printf("\n");
    }
}