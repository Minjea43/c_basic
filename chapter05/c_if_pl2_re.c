#include<stdio.h>
int main (void){
    // ���� ���� - �����丵

    int score;
    char grade;
    printf("������ �Է��Ͻÿ� :");
    scanf("%d", &score);

    if (score >=0 && score <=100){//�����κ��� ��� �Ǵ�
        // ���� : 0~100��
        if (score>90){//score : 100��~91��
        grade = 'A';
        }else if (score > 80){//score : 90��~81��
        grade = 'B';
        }else if (score > 70){//score : 80��~71��
        grade = 'C';
        }else if (score > 60){//score : 70��~61��
        grade = 'D';
        }else {//score : 60��~
        grade = 'F';
        }
        printf ("����� ������: %c", grade);//
    }else{
        //���� : 0�� �̸� or 100�� �ʰ�
        printf("ERROR : 0~100�� ���̿� ���� �Է��ϼ���");
    }
}