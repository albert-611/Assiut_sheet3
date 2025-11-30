#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    long long a[105][105];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%lld", &a[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
