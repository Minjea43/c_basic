#include<stdio.h>
#include<string.h>
//�޴�ǥ ����(����)
char *burger_name[3]={"���", "��������", "���̹���"};
char *sid_name[3]={"�Ƴʰ�", "ġ�ƽ", "��¡�"};
char *drink_name[3]={"��ī�ݶ�", "�����ݶ�", "��������Ʈ"};

//����ǥ ����(����)
int *burger_name[3]={"5900", "5500", "4300"};
int *sid_name[3]={"2000", "1500", "2000"};
int *drink_name[3]={"1200", "1000", "1000"};

//�� �ֹ� ��� ����
char *menu_save[3] = { };    //�ֹ� �޴�
char *price_save[3] = { };    //�ֹ� ����

void print_main_menu(void);

int main() {
    //���� �޴� ���
    print_main_menu();

    //����� ���� �޴� ����
    int menu_num = 0;

    printf("��ȣ :");
    scanf("%d", &menu_num);
        //if(menu_num >= 1 && menu_num <= 4){
        //}else{
        //    puts("Warling: 1~4�� ��ȣ�� �Է��ϼ���");
        //}

    if(menu_num < 1 || menu_num > 4){
        puts("Warling: 1~4�� ��ȣ�� �Է��ϼ���");
    }
    
    printf("�Է� : %d\n", menu_num);
}

void print_main_menu(void){
    printf("cnu ����");
    printf("�ܹ��� ��Ʈ");
    printf("�ܹ��� �޴�");
    printf("���̵� �޴�");
}