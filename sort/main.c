#include <stdio.h>
#include <stdlib.h>
#include "include.h"
// GB2312

/* 
ͳ�Ƹ��������������ͬ������ʱ�����ʱ��
Ĭ������Ϊ����
Ĭ�ϣ��ɸı䣩����Ĵ�СN 
Ĭ�Ϸ�Χ�Դ���N����ֹԪ�ع����ظ����������
����������˴�С����ʹӴ�С������
*/


void getTime(int n, int cmd) {
    int* arr = creatArr(n, cmd);

    printf("ð������: ");
    timer(arr, n, 1, BubbleSort);

    printf("ѡ������: ");
    timer(arr, n, 1, SelectionSort);

    printf("��������: ");
    timer(arr, n, 1, InsertionSort);

    printf("�鲢����: ");
    timerM(arr, n, 1);

// ����������������Ϊ�����㷨ʵ��Ĭ�ϱȽ�ֵ������ߣ��¿�����100000��ʱ��ջ����������Կ��Ų������ʱ��
    if(cmd == 0) { 
        printf("��������: ");
        timerQ(arr, n, 1);
    }
}

void test104() {  // 10000

    printf("�������ﵽ1��\n");

    printf("�������Ƚ�:\n");
    getTime(10000, 0);

    printf("��õ���������鱾������\n");
    getTime(10000, 1);
    
    printf("��������������ȫ����\n");
    getTime(10000, -1);


}




void test105() { //100000

    printf("�������ﵽ10��\n");

    printf("�������Ƚ�:\n");
    getTime(100000, 0);
    
    printf("��õ���������鱾������\n");
    getTime(100000, 1);
    
    printf("��������������ȫ����\n");
    getTime(100000, -1);
}

// �����㷨ʱ��̫���Ͳ�����100��εļ��㣬 ֻ�Թ鲢����Ϳ���������в���
void test106() {
    printf("�������ﵽ100��");
    int* arr = creatArr(1000000, 1);
    printf("�鲢����: ");
    timerM(arr, 1000000, 1);

}




int main(){

    test104();

    test105();

    test106();

    return 0;
}

