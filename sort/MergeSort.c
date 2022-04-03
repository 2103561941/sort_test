#include "include.h"
// #include <stdio.h>

/*  
    ��������

    ͨ������˼���������ж԰��֣� ���Ե����Ͻ�������ϲ���
*/
void Merge(int* arr, int low, int high, int mid, int* aux, int k);

// ������õĺ��� ������
void MergeSort(int* arr, int low, int high, int* aux, int k) { // ��Ҫ����ռ�O(n) aux
    // printf("%d %d\n", low, high);
    if(low >= high) return; // [low, high] ��ʾ��Ҫsort�ķ�Χ

    int mid = (high - low) / 2 + low; // �԰�� 
    // �ݹ��˼�� ����Χ��ȡ����ұգ�
    MergeSort(arr, low, mid, aux, k);
    MergeSort(arr, mid + 1, high, aux, k);

    // ǰ��MergeSort���Ա�֤������������ֱ�����
    Merge(arr, low, high, mid, aux, k);
    
    for(int i = low; i <= high; i++) {
        arr[i] = aux[i];
    }
}


// aux ��Ҫ��Ϊ�洢���������Ļ�����
void Merge(int* arr, int low, int high, int mid, int* aux, int k) {
    // ���������ݱȴ�СȻ����뵽aux��
    int i = low, j = mid + 1;
    int t = i; // aux���±�

    while(i <= mid && j <= high) {
        if(arr[i] * k < arr[j] * k) {
            aux[t++] = arr[i++];
        }
        else {
            aux[t++] = arr[j++];
        }
    }

    // ���ܴ��������黹��û�Ž�ȥ�����
    while(i <= mid) {
        aux[t++] = arr[i++];
    }
    
    while(j <= high) {
        aux[t++] = arr[j++];
    }
}