#include <stdio.h>

int main(){

    int n, count = 0;
    scanf("%d", &n);

    char ch[] = "Lucky";
    char chu[] = "Unlucky";
    

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int mn = a[0];
    for (int i = 0; i < n; i++)
    {
        if (mn >= a[i])
        {
            mn = a[i];
        }
    }

    for (int j = 0; j < n; j++)
    {
       if (mn == a[j])
       {
         count++;
       }
       
    }
    

    if (count %2 != 0)
    {
        printf("%s", ch);
    }
    
    else{
        printf("%s", chu);
    }


    return 0;
    
}