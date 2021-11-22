#include <stdio.h>

/*
2021年5月30日星期日 下午8:04
插入排序思想：
    可以看做从左到右排序，相邻两个数，如果后一个比前一个小，就交换两个数的位置
    当然也可以从最后往起始位置比较，如果后一个数比前一个大，就交换两个数的位置（感觉有点像冒泡😀）
    平均时间复杂度O(n^2)
*/
void InsertSort(int a[], int num) {
    for (int i = 1; i <= num - 1; i++) {
        int maxNum = a[i];
        int j = i - 1;
        while (j >= 0 && maxNum < a[j]) {
            a[j + 1] = a[j];
            a[j] = maxNum;
            j--;
            for (int k = 0; k < num - 1; ++k) {
                printf("%d\t", a[k]);
            }
            printf("\n");
        }
    }
}

int main(int argc, char const *argv[]) {
    int num[] = {5, 3, 1, 7, 4, 2, 68, 75, 43, 26};
    printf("排序前：");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", num[i]);
    }
    printf("\n");
    InsertSort(num, 10);
    printf("排序后：");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", num[i]);
    }

    return 0;
}
