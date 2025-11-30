#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[1005], b[1005];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    qsort(a, n, sizeof(int), cmp);
    qsort(b, n, sizeof(int), cmp);

    int ok = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            ok = 0;
            break;
        }
    }

    if (ok) printf("yes");
    else printf("no");

    return 0;
}

