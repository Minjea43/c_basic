#include<stdio.h>
int main (void){
    // ���� ���� - �����丵

    int score;
    char grade;
    printf("������ �Է��Ͻÿ� :");
    scanf("%d", &score);

    if (score >=0 && score <=100){
        // ���� : 0~100��
        if (score>90){
        grade = 'A';
        }else if (score > 80){
        grade = 'B';
        }else if (score > 70){
        grade = 'C';
        }else if (score > 60){
        grade = 'D';
        }else {
        grade = 'F';
        }
        printf ("����� ������: %c", grade);
    }else{
        //���� : 0�� �̸� or 100�� �ʰ�
        printf("ERROR : 0~100�� ���̿� ���� �Է��ϼ���");
    }
}