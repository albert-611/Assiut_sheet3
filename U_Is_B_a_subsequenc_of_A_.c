#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    long long a[10005], b[10005];
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    for (int i = 0; i < m; i++) scanf("%lld", &b[i]);

    int j = 0;
    for (int i = 0; i < n && j < m; i++) {
        if (a[i] == b[j]) j++;
    }

    if (j == m) printf("YES");
    else printf("NO");

    return 0;
}

