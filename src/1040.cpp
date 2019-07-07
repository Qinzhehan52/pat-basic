// from jianshu OliverLew

#include <stdio.h>

#define LIMIT 1000000007

int main()
{
    int P = 0, PA = 0, PAT = 0;

    char c;

    while ((c = getchar()) != '\n')
    {
        if (c == 'P') P++;
        if (c == 'A') PA = (PA + P) % LIMIT;
        if (c == 'T') PAT = (PAT + PA) % LIMIT;
    }
    printf("%d", PAT);
    
    return 0;
}