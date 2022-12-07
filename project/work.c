#include<stdio.h>
#include<string.h>
//메뉴표 생성(전역)
char *burger_name[3]={"빅맥", "통새우와퍼", "싸이버거"};
char *sid_name[3]={"맥너겟", "치즈스틱", "오징어링"};
char *drink_name[3]={"코카콜라", "제로콜라", "스프라이트"};

//가격표 생성(전역)
int *burger_name[3]={"5900", "5500", "4300"};
int *sid_name[3]={"2000", "1500", "2000"};
int *drink_name[3]={"1200", "1000", "1000"};

//고객 주문 기록 저장
char *menu_save[3] = { };    //주문 메뉴
char *price_save[3] = { };    //주문 가격

void print_main_menu(void);

int main() {
    //메인 메뉴 출력
    print_main_menu();

    //사용자 메인 메뉴 선택
    int menu_num = 0;

    printf("번호 :");
    scanf("%d", &menu_num);
        //if(menu_num >= 1 && menu_num <= 4){
        //}else{
        //    puts("Warling: 1~4의 번호를 입력하세요");
        //}

    if(menu_num < 1 || menu_num > 4){
        puts("Warling: 1~4의 번호를 입력하세요");
    }
    
    printf("입력 : %d\n", menu_num);
}

void print_main_menu(void){
    printf("cnu 버거");
    printf("햄버거 세트");
    printf("햄버거 메뉴");
    printf("사이드 메뉴");
}