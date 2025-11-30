#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char s[1000005];
    scanf("%s", s);

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += s[i] - '0';
    }

    printf("%lld", sum);
    return 0;
}
