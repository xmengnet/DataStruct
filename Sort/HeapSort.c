/**
 * Created by liyp on 2021/10/30.
 * 堆排序：
 *  使用数组创建一棵完全二叉树，它的规律有：双亲节点parent,左孩子c1,右孩子c2
 *                                  c1=2*parent+1; ①
 *                                  c2=2*parent+2; ②
 *                                  parent=((c1|c2)-1)/2 ③
 *  堆排序的原理是将一个有一定顺序（双亲节点比左右孩子都大）的完全二叉树根节点与最后一个节点交换，
 *  交换一次后最后一个就已经是最大值了，然后将最后一个前面的所有节点重新构建成有一定顺序的完全二叉树，
 *  重复交换根节点与最后一个节点的位置，就实现了从头到尾从小到大的顺序
 *  实现构造有一定顺序（双亲节点比左右孩子都大）的完全二叉树的原理：
 *      如果本身就具有这个顺序就不用排序，但如果是无序的就需要排序，
 *      无序需要从最底层往最高层构建堆，
 *      就需要使用③的规律，知道最后一个元素可以得到它的双亲节点，它的双亲节点及其之前的节点都构成了完全二叉树，
 *      循环构建就可以完成有一定顺序的完全二叉树，
 *      最基础的就是拿根节点与左右孩子比较大小，如果根节点比孩子节点小就交换顺序
 *      并且递归调用比较，直到最后一个节点
 *
 * 参考：https://www.bilibili.com/video/BV1Eb41147dK
*/



#include <stdio.h>

void swap(int tree[], int i, int max) {
    int temp = tree[i];
    tree[i] = tree[max];
    tree[max] = temp;
}

//最基础部分，比较根节点与左右孩子
void heapify(int tree[], int n, int i) {
    if (i >= n)
        return;
    int c1 = 2 * i + 1;
    int c2 = 2 * i + 2;
    int max = i;
    if (c1 < n && tree[c1] > tree[max]) {
        max = c1;
    }
    if (c2 < n && tree[c2] > tree[max]) {
        max = c2;
        swap(tree, c2, max);
    }
    if (max != i) {
        swap(tree, i, max);
        heapify(tree, n, max);
    }

}

//构建大根堆，从最后一个完全二叉树到第一个
void build_heap(int tree[], int n) {
    int last_node = n - 1;
    int parent = (last_node - 1) / 2;
    for (int i = parent; i >= 0; --i) {
        heapify(tree, n, i);
    }
}

//交换根节点与最后一个节点
void heap_sort(int tree[], int n) {
    build_heap(tree, n);

    for (int i = n - 1; i >= 0; --i) {
        swap(tree, i, 0);
        heapify(tree, i, 0);
    }
}

int main() {
//    有序堆
//    int tree[] = {10, 5, 6, 3, 2, 4, 1};
//无序堆
    int tree[] = {1, 5, 2, 3, 4, 6, 10};

    int n = 7;
    heap_sort(tree, n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", tree[i]);
    }
    return 0;
}