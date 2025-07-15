#include <stdio.h>

int main()
{

    int levels;
    scanf("%d", &levels);

    int array[levels] = {0};

    int xl, yl;
    scanf("%d ", &xl);

    for (int i = 0; i < xl; i++)
    {
        int l;
        scanf("%d", &l);
        array[l - 1] = 1;
    }

    scanf("%d ", &yl);
    for (int i = 0; i < yl; i++)
    {
        int l;
        scanf("%d", &l);
        array[l - 1] = 1;
    }
    for (int i = 0; i < levels; i++)
    {
        if (array[i] == 0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");

    return 0;
}