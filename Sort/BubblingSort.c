#include <stdio.h>
#include <stdbool.h>

/*
2021年5月29日星期六 下午9:49
冒泡排序的基本思想：
    从前到后比较相邻的两个数，将较大的数放在后面，第一次一直比较到最后一个
    这样就找到了最大的数，依次循环，找到次一级大的数，直到循环到第一个
    优化后的冒泡循环使用一个标记判断是否已经排好了，
    不需要继续循环，如果不交换相邻的数表示已经排好
    平均时间复杂度为O(n^2)
*/

void Swap(int *a, int *b) {
    // printf("before:%d %d\n", *a, *b);
    int tmp = *a;
    *a = *b;
    *b = tmp;
    // printf("last:%d %d\n", *a, *b);
}

void BubblingSort(int a[], int num) {
    for (int i = num - 1; i > 0; i--) {
        bool flag = false;
        for (int j = 0; j < i; j++) {
            if (a[j + 1] < a[j]) {
                Swap(a + j, a + j + 1);
                flag = true;
            }
        }
        if (!flag) {
            break;
        }
    }
}

int main(int argc, char const *argv[]) {
    int num[] = {2, 3, 1, 7, 3, 5, 9, 20, 12, 9};
    printf("排序前：");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", num[i]);
    }
    printf("\n");
    BubblingSort(num, 10);
    printf("排序后：");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", num[i]);
    }

    return 0;
}