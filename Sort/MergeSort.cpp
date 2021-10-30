/*
2021年5月30日星期日 下午8:52
归并算法基本思想：
    将一个数组递归地从中间分成两部分，直到新数组元素个数为一个
    从最底层将分成的数组的元素进行比较并且排序并且合并为两个新的数组
    平均时间复杂度为O(nlogn)，空间复杂度为O(n)，因为每次递归都要创建新的空间
    @MergeSort()
*/
#include <stdio.h>

void Merge(int a[], int low, int high) {
    int mid = (low + high) / 2;
    int N = high - low + 1;
    int b[N];
    int left = low, right = mid + 1, bIdx = 0;
    while (left <= mid && right <= high)
        b[bIdx++] = (a[left] <= a[right]) ? a[left++] : a[right++];
    while (left <= mid)
        b[bIdx++] = a[left++];
    while (right <= high)
        b[bIdx++] = a[right++];
    for (int k = 0; k < N; ++k) {
        a[low + k] = b[k];
    }
}

void MergeSort(int a[], int low, int high) {

    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, high);
    }
}

//二分归并排序，需要原数组分为两部分，并且每一部分已经分别排好序
//void MergeSort(int a[], int low, int high) {
//    int mid = (low + high) / 2;
//    int N = high - low + 1;
//    int b[N];
//    int left = low, right = mid + 1, bIdx = 0;
//    while (left <= mid && right <= high)
//        b[bIdx++] = (a[left] <= a[right]) ? a[left++] : a[right++];
//    while (left <= mid)
//        b[bIdx++] = a[left++];
//    while (right <= high)
//        b[bIdx++] = a[right++];
//    for (int k = 0; k < N; ++k) {
//        a[low + k] = b[k];
//    }
//}

int main(int argc, char const *argv[]) {
//    二分归并需要将两部分分别排序
//    int a[] = {13, 21, 24, 34, 43, 1, 3, 4, 7, 8};
    int a[] = {20, 45, 14, 3, 4, 15, 13, 24, 36, 6};

    MergeSort(a, 0, 9);
    for (int i: a) {
        printf("%d\t", i);
    }

    return 0;
}
