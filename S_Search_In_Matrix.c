#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[105][105];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    int x;
    scanf("%d", &x);

    int found = 0;
    for (int i = 0; i < n && !found; i++)
        for (int j = 0; j < m && !found; j++)
            if (a[i][j] == x) found = 1;

    if (found) printf("will not take number");
    else printf("will take number");

    return 0;
}
