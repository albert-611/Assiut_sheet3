#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long x;
    scanf("%lld", &x);
    long long in = -1;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            in = i;
            break;
        }
        
    }
    

    printf("%lld\n", in);

    return 0;
    
}