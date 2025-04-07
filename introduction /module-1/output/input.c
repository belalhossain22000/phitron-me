#include <stdio.h>

int main()
{
    int a;
    float f;
    char c;
    scanf("%d", &a);
    scanf("%f %f %c", &f, &f, &c);
    printf("%d %f %c ", a, f, c);
    return 0;
};