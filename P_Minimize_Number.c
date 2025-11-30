#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[205];
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);

    int cnt = 0;

    while (1) {
        int ok = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                ok = 0;
                break;
            }
        }
        if (!ok) break;

        for (int i = 0; i < n; i++) a[i] /= 2;
        cnt++;
    }

    printf("%d", cnt);
    return 0;
}
