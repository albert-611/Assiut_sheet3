#include <stdio.h>

int main(){

    int n,i;
    scanf("%d", &n);
    int a[n];
    int size = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

    }

    int mn = a[0];

    for (int i = 0; i < n; i++)
    {
        
        if ( mn > a[i])
        {
            mn = a[i];
            size = i;
        }
        
    }
    
    printf("%d %d\n", mn,size + 1);

}