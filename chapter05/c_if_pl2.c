#include<stdio.h>
int main (void){
    //���� ����
    //  - ����ڷκ��� ���� (0~100��)
    //  - 91~100 : A
    //  - 81~90 : B
    //  - 71~80 : C
    //  - 61~70 : D
    //  - ~60 : F

    int score;
    char grade;

    printf("������ �Է��Ͻÿ� :");
    scanf("%d", &score);

    // ���� 1 ���� >=91
    // ���� 2 ���� <=100
    // &&  AND ������ -> ���� 2���� ��� ���ΰ�쿡�� ��


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


    printf ("����� ������: %c", grade);
}