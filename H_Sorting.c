#include <stdio.h>

int main(){

    int n, mn;
    int temp;
    scanf ("%d", &n);

    int a[n];
 
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
         mn = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[mn])
            {
                mn = j;
            }
            
        }

        temp = a[i];
        a[i] = a[mn];
        a[mn] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);    
    }

    printf("\n");
        
    return 0;

}