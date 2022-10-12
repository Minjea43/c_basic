#include<stdio.h>
int main (void){
    //학점 계산기
    //  - 사용자로부터 점수 (0~100점)
    //  - 91~100 : A
    //  - 81~90 : B
    //  - 71~80 : C
    //  - 61~70 : D
    //  - ~60 : F

    int score;
    char grade;

    printf("점수를 입력하시오 :");
    scanf("%d", &score);

    // 조건 1 점수 >=91
    // 조건 2 점수 <=100
    // &&  AND 연산자 -> 조건 2개가 모두 참인경우에만 참


    if (score <=100 && score>90){
        grade = 'A';
    }else if (score <=90 &&score > 80){
        grade = 'B';
    }else if (score <=80 &&score > 70){
        grade = 'C';
    }else if (score <=70 && score > 60){
        grade = 'D';
    }else if (score <=60 && score >0){
        grade = 'F';
    }


    printf ("당신의 학점은: %c", grade);
}