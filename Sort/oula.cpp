#include <cstdio>

#include <cstring>

#include <algorithm>

#include <iostream>

using namespace std;

struct node {

    int a, b;

    char s[25];

    bool operator<(const node &A) const {

        return strcmp(s, A.s) < 0;
    }

} d[1005];

int du[1005], cnt, v[1005], x[1005], ans[1005], p, m;

void dfs(int a, int id) {

    int i = x[a], b;

    while (d[i].a == a) {

        if (!v[i]) {

            v[i] = 1;

            dfs(d[i].b, i);
        }

        i++;
    }

    ans[++m] = id;
}

int main() {

    int i, j, n, a, b, c;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        scanf("%s", d[i].s);

        c = strlen(d[i].s);

        d[i].a = d[i].s[0];

        d[i].b = d[i].s[c - 1];
    }

    sort(d + 1, d + i);

    for (i = 1; i <= n; i++) {

        du[d[i].a]++, du[d[i].b]++;
    }

    for (i = 'z'; i >= 'a'; i--)
        if (du[i] & 1)
            cnt++, p = i;

    if (cnt == 1 || cnt > 2) {

        printf("***\n");

        return 0;
    }

    if (!p)
        p = d[1].a;

    for (i = n; i >= 1; i--)
        x[d[i].a] = i;

    dfs(p, x[p]);

    if (m != n + 1) {

        printf("***\n");

        return 0;
    }

    for (i = m - 1; i > 1; i--)
        printf("%s.", d[ans[i]].s);

    printf("%s\n", d[ans[1]].s);

    return 0;
}