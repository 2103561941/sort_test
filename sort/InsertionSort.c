#include "include.h"

// ��������δʹ�ö��ֲ����Ż��İ汾��
void InsertionSort(int* arr, int n, int k) { 
    
    for(int i = 1; i < n; i++) {
        int x = arr[i];// �������Ԫ��
        int j = i - 1; // �Ӻ���ǰ�Ҳ��룬 ���Ա�֤����Ԫ�����Ҳ���λ�õ�ʱ��ǰ���Ԫ��������ġ�
        while(j >= 0 && x * k < arr[j] * k) {
            arr[j + 1] = arr[j];
            --j; 
        }
        arr[j + 1] = x;
    }
}