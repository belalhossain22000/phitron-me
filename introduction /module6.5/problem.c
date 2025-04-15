#include <stdio.h>

int main()
{
    char cha;
    scanf("%c", &cha);
    char nextCha = cha + 1;
    if (cha == 'z')
    {
        printf("%c", 'a');
    }
    else
    {

        printf("%c\n", nextCha);
    }

    return 0;
}