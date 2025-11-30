#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[100005], freq[100005] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }

    for (int i = 1; i <= m; i++) {
        printf("%d\n", freq[i]);
    }

    return 0;
}
