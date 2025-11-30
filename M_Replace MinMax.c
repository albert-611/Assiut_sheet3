#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int mn = 0, mx = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[mn]) mn = i;
        if (a[i] > a[mx]) mx = i;
    }

    int t = a[mn];
    a[mn] = a[mx];
    a[mx] = t;

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
