#include <stdio.h>

int main()
{
    char str[51];
    int cup = 1;
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A')
        {
            if (cup == 1)
            {
                cup = 2;
            }
            else if (cup == 2)
            {
                cup = 1;
            }
        }
        else if (str[i] == 'B')
        {
            if (cup == 2)
            {
                cup = 3;
            }
            else if (cup == 3)
            {
                cup = 2;
            }
        }
        else
        {
            if (cup == 1)
            {
                cup = 3;
            }
            else if (cup == 3)
            {
                cup = 1;
            }
        }
    }
    printf("%d", cup);

    return 0;
}