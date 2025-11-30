#include<stdio.h>

int main(){

    int n, num;
    scanf("%d", &n);
    

    for (int i = 1; i <= n; i++)
    {
        
        scanf("%d", &num);

    }

    int a[num];
        
        for (int j = 1; j <= num; j++)
        {
            scanf("%d", &a[num]);
        }
        
    

    int min = 1e5 + 3;
    int val = 0;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 2; j <= num; j++)
        {
            val = (a[i] - i) + (a[j] + j);

            if (min > val)
            {
                min = val;
            }
            
        }
        
    }

    printf("%d", min);
}