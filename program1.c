#include<stdio.h>

int main()
{
    int n, i, digit = 1;

    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            digit = 0;
            break;
        }
    }

    if(digit == 1)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}