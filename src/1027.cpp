#include <iostream>
#include <math.h>

int main()
{
    int total, n, remain;
    char c;

    std::cin >> total >> c;

    n = sqrt((total + 1) / 2) - 1;
    remain = total - (2 * (n + 1) * (n + 1)) + 1;

    if (n > 0)
    {
        int tmp = n;
        while (tmp)
        {
            for (int i = 0; i < n - tmp; i++)
            {
                printf(" ");
            }

            for (int i = 0; i < 2 * tmp + 1; i++)
            {
                putchar(c);
            }
            printf("\n");
            tmp--;
        }

        for (int i = 0; i < n; i++)
        {
            printf(" ");
        }

        printf("%c\n", c);
        tmp = 1;

        while (tmp <= n)
        {
            for (int i = 0; i < n - tmp; i++)
            {
                printf(" ");
            }

            for (int i = 0; i < 2 * tmp + 1; i++)
            {
                putchar(c);
            }
            printf("\n");
            tmp++;
        }
        printf("%d", remain);
    }
    else
    {
        printf("%c\n%d",c, remain);
    }
}