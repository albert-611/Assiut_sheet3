#include <stdio.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    long long a[100005], prefix[100005];
    prefix[0] = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        prefix[i] = prefix[i-1] + a[i];
    }

    while (q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%lld\n", prefix[r] - prefix[l-1]);
    }

    return 0;
}

