#include "include.h"

// ð������ (δ�Ż���)
void BubbleSort(int* arr, int n, int k) { // k Ϊ 1 ��С�������� k Ϊ 0 �Ӵ�С����  
    for(int i = 0; i < n - 1; i++) { //����ֻ��n-1��

        for(int j = 0; j < n - 1 - i; j++) { // ��С���� �������Ѿ�������
    
            if(arr[j] * k > arr[j+1] * k) { 
                swap(&arr[j], &arr[j+1]);
            }
    
        }
    }
}
