/**
 * Created by liyp on 2021/10/30.
 * 快速排序可以看作是冒泡排序的加强版,使用递归方法，但又使用了和归并排序一样的分段排序的思想
 * 具体操作方法：先取一个pivotkey,一般取数组的第一个元素，将其与最后一个元素交换，
 * 定义出，i,j 两个变量，最初都指向第一个元素位置，如果a[j]小于pivot,Swap(a[i],a[j]),i++;否则j++
 *j->high-1停止，i左边的都比pivot小，所以i所对应的位置就是pivot的位置，Swap(a[i],a[high])并返回i的值
 * 递归调用Partition(a,low,pivot-1)和Partition(a,pivot+1,high)
 * 时间复杂度：
 *      最坏情况下：O(n^2)
 *      最好和平均：O(nlogn)
*/

#include <stdio.h>

void Swap(int *a, int *b) {
    // printf("before:%d %d\n", *a, *b);
    int tmp = *a;
    *a = *b;
    *b = tmp;
    // printf("last:%d %d\n", *a, *b);
}

int Partition(int a[], int low, int high) {
//    int pivot = low;
    Swap(&a[low], &a[high]);
    int i = low;
    for (int j = low; j < high; ++j) {
        if (a[j] < a[high]) {
            Swap(&a[i], &a[j]);
            i++;
        } else {
            j++;
        }
    }
    Swap(&a[i], &a[high]);
    return i;
}

void QuickSort(int a[], int low, int high) {
    if (low >= high)
        return;
    int p = Partition(a, low, high);
    QuickSort(a, low, p - 1);
    QuickSort(a, p + 1, high);
}

int main(void) {
    int num[] = {2, 3, 1, 7, 6, 5, 9, 20, 12, 35};
    printf("排序前：");
    for (int i: num) {
        printf("%d\t", i);
    }
    printf("\n");
    QuickSort(num, 0, 9);
    printf("排序后：");
    for (int i: num) {
        printf("%d\t", i);
    }
    return 0;
}