#include "include.h"

/*
    ��������
    ���÷���˼�룬 ��ȡ�����е�һ��������С��/�����������ֱ�ŵ����ߣ� Ȼ��ݹ������ ֱ�����������Ϊ1
    QuickSort �����ǶԵݹ����˼������֣� ��QuickPass �������м��㷨��ʵ�֡�
*/
int QuickPass(int* arr, int low, int high, int k);

void QuickSort(int* arr, int low, int high, int k) { // ����ұ�[low, high]
    if(low >= high) { // �����СΪ1 �Ͳ������������
        return;
    }

    int pivot = QuickPass(arr, low, high, k); //�м�����±�

    QuickSort(arr, low, pivot - 1, k);
    QuickSort(arr, pivot + 1, high, k);

}
/*
    ����˼����ͨ��ȡ����ߵ��������ұߵ����ŵ���߿��е�λ�ã�
    Ȼ�����ߵ�����������ߵ����ŵ��ұ߸ոտճ�����λ��
*/


// ���ٻ��� ������ŦԪ������λ��
int QuickPass(int* arr, int low, int high, int k) {
    // ����Ĭ��ȡlowΪ��ŦԪ�ص��±�, ��󷵻ظı���low
    int x = arr[low]; // ��ʱ�±�Ϊlow�ĵ�ַ�ǡ��ա��� ��һ��high��Ԫ�طŵ���λ��

    while(low < high) {

        // �ҳ��ұߵ�һ����lowС��Ԫ�ص��±�
        while(low < high && x * k <= arr[high] * k) { 
            --high;
        }

        if(low == high) break; // ��ʾ�ұߵ�Ԫ�ض���x��

        arr[low++] = arr[high]; // ��ʱ high ��λ�ÿճ�����
        
        while(low < high && arr[low] * k <= x * k) {
            ++low;
        }

        if(low == high) break;

        arr[high--] = arr[low];
    }

    // �������Ԫ�ع�λ
    arr[low] = x;
    
    return low;
}
