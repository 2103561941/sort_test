#include "include.h"

// ��ѡ������
void SelectionSort(int* arr, int n, int k) {

    for(int i = 0; i < n - 1; i++) { // ����ѭ������

        int tmpI = i; // ���赱ǰ��С(���)ֵ�� i λ��
    
        for (int j = i + 1; j < n; j++) {
            if(arr[j] * k < arr[tmpI] * k) {
                tmpI = j;
            }
        }
        if(tmpI != i) swap(&arr[tmpI], &arr[i]);
    }
    
}