#ifndef MY_INCLUDE
#define MY_INCLUDE

// function.c
//��ӡ����
void print(int* arr, int n);
//����һ������
int* creatArr(int n, int cmd); 
//��������ͬһ������
int* copyArr(int* arr, int n);
//���������е�����Ԫ��
void swap(int* a, int* b); 
//��ʱ��
void timer(int* arr, int n, int k, void(*sort)(int*, int, int)); 
void timerQ(int* arr, int n, int k); // ����ר����ʱ��
void timerM(int* arr, int n, int k); // �鲢�����ʱ��

// �����㷨

// ð������
void BubbleSort(int *arr, int n, int k);
// ѡ������
void SelectionSort(int* arr, int n, int k);
// ��������
void InsertionSort(int* arr, int n, int k);
// �鲢����
void MergeSort(int* arr, int low, int high, int* aux, int k);
// ��������
void QuickSort(int* arr, int low, int high, int k);

#endif
