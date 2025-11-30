#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long f[55];
    f[1] = 0;
    f[2] = 1;

    for (int i = 3; i <= n; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    printf("%lld", f[n]);
    return 0;
}
