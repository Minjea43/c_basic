/**
 * ���α׷��� ���� 3��° �Դϴ�.

C���α׷��� �� Ȱ���ؼ� ���� ���ǿ� �´� �ڵ带 �ۼ��ϰ� �����ϼ���.

������ ����ĭ�� ������ ÷���������� �ڵ带 (����+�ٿ��ֱ�)�ؼ� �������ּ���.



����: ���� ���� ���� �Ǻ���ġ ������ ��� �� �� �ִ� �ڵ带 �ۼ��ϼ���.

        (�Ǻ���ġ �����̶� ���� ���ڿ� ���� ���ڸ� ���ؼ� ���� ���ڸ� ����ϴ� �����Դϴ�.)

        (�Ǻ���ġ ���� ��: 1 1 2 3 5 8 13)

        (�Է��� ���� �����ϴ�. ���� �����ϰ� ��µǴ� �ڵ带 �ۼ��ϼ���.)

        (��¿��� 1, 1�� �����Դϴ�. 2���� ����ϵ��� �ڵ带 �ۼ��ϼ���.)

        (�ܼ� printf("1 1 2 3 5 8 13")���� �ۼ��ϸ� 0�� ó�� �˴ϴ�.)



���:

printf("1 1"); ������ �ܼ� printf()�� ����ϰ� 2���� �Ǻ���ġ ���� ����ڵ�� ��µǵ��� �ۼ��ϼ���.

1 1 2 3 5 8 13 


*/
#include<stdio.h>
int main(void){
    int a = 1, b = 1, c, num;
    printf("1  1");

    for(int i=1; i<6; i++){
        c = a + b;
        printf("  %d", c);
        a=b;
        b=c;
    }
}