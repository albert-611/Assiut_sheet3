#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int min = 1000000000;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int val = a[i] + a[j] + (j - i);
                if (val < min) min = val;
            }
        }

        printf("%d\n", min);
    }

    return 0;
}
