#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    long long a[n], b[n], x;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = n-1; i >= 0; i--)
    {
        printf("%lld ", a[i]);
    }
    printf("\n");

    return 0;

}