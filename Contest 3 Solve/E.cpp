#include <stdio.h>
int main()
{
    int rr;
    scanf("%d", &rr);
    int p = 11;
    while (p--)
    {
        int p, x;
        scanf("%d %d", &p, &x);
        if (p == 0)
            printf("No\n");
        else if (p < 10 && rr > (x / p))
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }

    return 0;
}