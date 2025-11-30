#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[105];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        int count = 0;
        for (int start = 0; start < n; start++) {
            int last = a[start];
            count++;
            for (int end = start + 1; end < n; end++) {
                if (a[end] >= last) {
                    count++;
                    last = a[end];
                } else break;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
