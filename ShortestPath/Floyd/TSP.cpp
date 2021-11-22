/**
 * Created by liyp on 2021/11/11.
 * 和Dijkstra算法一样，弗洛伊德(Floyd)算法也是一种用于寻找给定的加权图中顶点间最短路径的算法。
 * 弗洛伊德算法(Floyd)计算图中各个顶点之间的最短路径
 * 迪杰斯特拉算法用于计算图中某一个顶点到其他顶点的最短路径
 * 算法实现过程：
 *  对无向图来说，先定义二维数组，确定顶点数和边数，初始化时自己到自己的长度为0,其余为无穷
 *  两个顶点之间的距离可以直接看出，若限定这两个顶点必须经过一个中间节点，经过这个顶点后的权值小于直接连通的权值，
 *  则修改两点之间的权值，以此类推使之经过两个顶点、三个顶点。。。。
 *
 *  可参考：https://www.cnblogs.com/wangyuliang/p/9216365.html
*/

#include <stdio.h>

#define inf 0x3f3f3f3f

int main() {
    int a[5][5], i, j, k, m, n, t1, t2, t3;
    //读入n和m，m表示顶点个数，n表示边的条数
    printf("请输入顶点数和边数:\n");
    scanf("%d %d", &m, &n);
    //初始化
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (i == j) {
                a[i][j] = 0;
            } else {
                a[i][j] = inf;
            }
        }
    }
    printf("边数为：%d,顶点数为：%d\n", m, n);
    //读入边
    printf("请输入每条边及其权值：\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d %d %d", &t1, &t2, &t3);
        a[t1][t2] = t3;
        a[t2][t1] = t3;
    }
    //Floyd-Warshall算法核心语句
    for (k = 0; k < m; ++k) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                if (a[i][j] > a[i][k] + a[k][j])
                    a[i][j] = a[i][k] + a[k][j];
            }
        }
    }
    //输出最终的结果
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%10d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
