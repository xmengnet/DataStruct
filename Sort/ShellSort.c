/**
 *  Created by liyp on 2021/11/27.
 *
 *
*/
#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void shell_sort(int arr[], int n) {
    if (n < 0)
        return;
//    希尔排序，升序
    for (int d = n / 2; d > 0; d /= 2) {
        for (int i = d; i < n - 1; i++) {
            //i:代表即将插入的元素角标，作为每一组比较数据的最后一个元素角标
            //j:代表与i同一组的数组元素角标
            for (int j = i - d; j >= 0; j -= d) {//在此处-d 为了避免下面数组角标越界
                if (arr[j] > arr[j + d]) {// j+d 代表即将插入的元素所在的角标
                    //符合条件，插入元素（交换位置）
                    swap(arr, j, j + d);
                }
            }
        }
    }
}

int main() {
    int arr[] = {6, 4, 9, 1, 12, 25, 8, 3, 2};
    int n = 9;
    printf("原数组为：");
    for (int i = 0; i < n - 1; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    shell_sort(arr, n);
    printf("排序后为：");
    for (int i = 0; i < n - 1; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}

