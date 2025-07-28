#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int c=0;
    while (t--)
    {
        c++;
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int max=arr[0];
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>max){
                max=arr[i];
            }
        }
        printf("Case %d: %d\n",c,max);
        
    }
    return 0;
}