#include <stdio.h>

int main()
{
    int start, end, i, j, digit;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
    {
        if(i < 2)
            continue;

        digit = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                digit = 0;
                break;
            }
        }

        if(digit == 1)
            printf("%d ", i);
    }

    return 0;
}