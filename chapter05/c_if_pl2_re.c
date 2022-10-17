#include<stdio.h>
int main (void){
    // 학점 계산기 - 레펙토링

    int score;
    char grade;
    printf("점수를 입력하시오 :");
    scanf("%d", &score);

    if (score >=0 && score <=100){//점수로부터 등급 판단
        // 점수 : 0~100점
        if (score>90){//score : 100점~91점
        grade = 'A';
        }else if (score > 80){//score : 90점~81점
        grade = 'B';
        }else if (score > 70){//score : 80점~71점
        grade = 'C';
        }else if (score > 60){//score : 70점~61점
        grade = 'D';
        }else {//score : 60점~
        grade = 'F';
        }
        printf ("당신의 학점은: %c", grade);//
    }else{
        //점수 : 0점 미만 or 100점 초과
        printf("ERROR : 0~100점 사이에 값을 입력하세요");
    }
}