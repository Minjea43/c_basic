#include<stdio.h>
#include<string.h>

int main(void){
    int height;
    int weight;

    printf("신장(cm) 입력 : ");
    scanf("%d", &height);
    printf("몸무게(kg) 입력 : ");
    scanf("%d", &weight);

    //printf("%d cm, %d kg\n", height, weight);

    //2. 변환(신장 cm -> m)
    //예 183 -> 1.83
    //3. 계산 BMI 지수 = 몸무게 (kg)/신장(m)^2

    double height_m = (double)height/100;
    //printf("%.2f m", height_m);

    double bmi_value = weight/(height_m*height_m);
    //4. 조건
    //  18.5 미만 : 저체중
    //  18.5~23미만 : 정상
    //  23~26미만 : 과체중
    //  26~30미만 : 비만
    //  30이상 : 고도비만

    char bmi_dgree[20];

    if(bmi_value < 18.5){
        strcpy(bmi_dgree, "저체중");
    }else if(bmi_value >= 18.5 && bmi_value < 23){
        strcpy(bmi_dgree, "정상");
    }else if(bmi_value >= 23 && bmi_value < 26){
        strcpy(bmi_dgree, "과체중");
    }else if(bmi_value >= 26 && bmi_value < 30){
        strcpy(bmi_dgree, "비만");
    }else if(bmi_value >= 30 ){
        strcpy(bmi_dgree, "고도비만");
    }

    // 출력 
    printf("신장 %d cm, 몸무게 %d kg 으로\n ", height, weight);
    printf("당신의 bmi 지수는 %2.lf로 %s입니다", bmi_value, bmi_dgree);
}