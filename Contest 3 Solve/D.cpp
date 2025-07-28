#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int res = pow(n, 2) + pow(n - 1, 2);
    printf("%d\n",res);
    return 0;
}