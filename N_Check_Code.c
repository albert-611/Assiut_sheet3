#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    char s[25];
    scanf("%s", s);

    int ok = 1;

    if (s[a] != '-') ok = 0;

    for (int i = 0; s[i]; i++) {
        if (i == a) continue;
        if (s[i] < '0' || s[i] > '9') ok = 0;
    }

    if (ok) printf("Yes");
    else printf("No");

    return 0;
}
