#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int a[100005];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), cmp);

    while (q--) {
        int x;
        scanf("%d", &x);
        int l = 0, r = n - 1, found = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid] == x) { found = 1; break; }
            else if (a[mid] < x) l = mid + 1;
            else r = mid - 1;
        }
        if (found) printf("found\n");
        else printf("not found\n");
    }

    return 0;
}
