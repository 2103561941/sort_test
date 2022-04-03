#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "include.h"

// ���������е�����Ԫ��
void swap(int* a, int* b) { 
    int temp = *a;
    *a = *b;
    *b = temp;
}


// ��ӡ����
void print(int* arr, int n) {

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

// ��������
int* creatArr(int n, int cmd) { // cmd����ѡ��˳�����л����������л������
    
    int* arr = (int*)malloc(sizeof(int) * n);
    
    if(arr == NULL) {
        printf("creatSqArr error!\n");
        exit(0);
    }
    srand((unsigned)time(NULL));
    // ���
    if(cmd == 0) {
        for(int i = 0; i < n; i++) {
            arr[i] = rand() % (2*n) + 1; // [1, 2*N]
        }
    }

    // ����
    else if(cmd == 1) {
        for(int i = 0; i < n; i++) {
            arr[i] = i + 1;  // [1, N]
        }
    }

    // ����
    else if(cmd == -1) {
        for(int i = 0; i < n; i++) {
            arr[i] = n - i; // [N, 1]
        }

    }

    else {
        printf("cmd input error!\n");
        
    }
    return arr;
}

// �������飬 ���
int* copyArr(int* arr, int n) {

    int* arr1 = (int*)malloc(sizeof(int) * n);
    if(arr1 == NULL) {
        printf("copyArr error\n");
        exit(0);
    }
    for(int i = 0; i < n; i++) {
        arr1[i] = arr[i];
    }

    return arr1;
}


//void InsertionSort(int* arr, int n, int k);

//���㺯����������ʱ��
void timer(int* arr, int n, int k, void(*sort)(int*, int, int)){ 
    int* arr1 = copyArr(arr, n); //����һ���µ��������������
    clock_t start = clock();
    // print(arr, n);
    sort(arr1, n, k);
    // print(arr, n);
    // sort(arr, n, -k);
    // print(arr, n);
    clock_t end = clock();
    printf("%ldms\n", end - start);
    free(arr1);
}  

// ��Կ��ŵļ�ʱ�� 
void timerQ(int* arr, int n, int k) {
    int* arr1 = copyArr(arr, n); //����һ���µ��������������
    clock_t start = clock();

    QuickSort(arr1, 0, n - 1, k);

    clock_t end = clock();
    printf("%ldms\n", end - start);
    free(arr1);
}

// ��Թ鲢����ļ�ʱ��
void timerM(int* arr, int n, int k) {
    int* arr1 = copyArr(arr, n);
    clock_t start = clock();

    int* aux = malloc(sizeof(int) * n);
    if(aux == NULL) {
        printf("aux creat error\n");
        exit(0);
    }

    MergeSort(arr1, 0, n-1, aux, k);

    clock_t end = clock();

    printf("%ldms\n", end - start);
    free(arr1);
    free(aux);
}