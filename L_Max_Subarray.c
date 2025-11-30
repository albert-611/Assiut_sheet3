#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int a[105];
        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
        }

        int first = 1;
        for (int start = 0; start < N; start++) {
            int currentMax = a[start];
            for (int end = start; end < N; end++) {
                if (a[end] > currentMax) currentMax = a[end];
                if (!first) printf(" ");
                printf("%d", currentMax);
                first = 0;
            }
        }
        printf("\n");
    }

    return 0;
}
