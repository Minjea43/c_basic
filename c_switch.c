/**
 * ���
 *  1. if ~ else if ~ else
 *  2. switch~case~default
 * 
 * 
 * ���� ���� ��� �� ���ǿ� �ش��ϴ� �ϳ��� ��� ����
 * 
 *   - ��Ģ
 *      1) ���ǽ��� �����ĸ� ���
 *      2) �⺻������ case�� break���� ����(�������� �ƴ�)
 *      3) break�� ���� ��� break ������ ������ ��� caswe ����
 *      4) default�� ���� ���� (if���� else�� ���)
 *      5) default�� ���� ��ġ�ص� ���������, ��κ� �� �ϴ�
 *      6) if������ switch���� ����ӵ� ����
*/
#include<stdio.h>
int main (void){
    int rank =2, m=0;

    switch(rank){
        case 1:
            m = 300;
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 100;
            break;
        default:
            m = 10;
            break;
            
    }

}