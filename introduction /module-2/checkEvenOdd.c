#include <stdio.h>

int main()
{

    int a;

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("the number is even =%d", a);
    }
    else
    {
        printf("the number is odd %d", a);
    }

    return 0;
}