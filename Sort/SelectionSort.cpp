#include <stdio.h>

/*
2021年5月29日星期六 下午9:21
选择排序原理：
    首先设置一个最大值（可以把最后一个数设置为最大值）
    这个最大值从后往前循环
    内嵌一个从前往后的循环，如果前面的数比设置的最大值要大就交换两个数
    时间复杂度O(n^2)
*/
void Swap(int *a, int *b) {
    // printf("before:%d %d\n", *a, *b);
    int tmp = *a;
    *a = *b;
    *b = tmp;
    // printf("last:%d %d\n", *a, *b);
}

void SelectionSort(int a[], int num) {
    // 第一种方式
    // for (int i = num - 2; i >= 0; i--)
    // {
    //     int maxNum = a[i];
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (maxNum < a[j])
    //         {
    //             Swap(a + j, a + i);
    //         }
    //     }
    // }
    // 第二种方式
    for (int i = 0; i < num - 2; i++) {
        int flag = 0;
        int MinNum = a[i];
        for (int j = i + 1; j < num - 1; j++) {
            if (MinNum > a[j]) {
                MinNum = a[j];
                flag = j;
            }
        }
        int x = a[flag], y = a[i];
        // printf("%d %d\t",a[flag],a[i]);
        Swap(a + flag, a + i);
        // printf("%d %d\t",a[flag],a[i]);
        x = a[flag], y = a[i];
    }
}

int main(int argc, char const *argv[]) {
    int num[] = {2, 3, 1, 7, 3, 5, 9, 20, 12, 9};
    printf("排序前：");
    for (int i: num) {
        printf("%d\t", i);
    }
    printf("\n");
    SelectionSort(num, 10);
    printf("排序后：");
    for (int i: num) {
        printf("%d\t", i);
    }

    return 0;
}
