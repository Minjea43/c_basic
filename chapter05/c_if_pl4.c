#include<stdio.h>
#include<string.h>

int main(void){
    int height;
    int weight;

    printf("����(cm) �Է� : ");
    scanf("%d", &height);
    printf("������(kg) �Է� : ");
    scanf("%d", &weight);

    //printf("%d cm, %d kg\n", height, weight);

    //2. ��ȯ(���� cm -> m)
    //�� 183 -> 1.83
    //3. ��� BMI ���� = ������ (kg)/����(m)^2

    double height_m = (double)height/100;
    //printf("%.2f m", height_m);

    double bmi_value = weight/(height_m*height_m);
    //4. ����
    //  18.5 �̸� : ��ü��
    //  18.5~23�̸� : ����
    //  23~26�̸� : ��ü��
    //  26~30�̸� : ��
    //  30�̻� : ����

    char bmi_dgree[20];

    if(bmi_value < 18.5){
        strcpy(bmi_dgree, "��ü��");
    }else if(bmi_value >= 18.5 && bmi_value < 23){
        strcpy(bmi_dgree, "����");
    }else if(bmi_value >= 23 && bmi_value < 26){
        strcpy(bmi_dgree, "��ü��");
    }else if(bmi_value >= 26 && bmi_value < 30){
        strcpy(bmi_dgree, "��");
    }else if(bmi_value >= 30 ){
        strcpy(bmi_dgree, "����");
    }

    // ��� 
    printf("���� %d cm, ������ %d kg ����\n ", height, weight);
    printf("����� bmi ������ %2.lf�� %s�Դϴ�", bmi_value, bmi_dgree);
}