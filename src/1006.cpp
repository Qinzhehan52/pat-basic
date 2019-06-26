#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int num[3];

    scanf("%d", &n);
    
    num[2] = n % 10;

    n = n / 10;

    num[1] = n % 10;
    num[0] = n / 10;

    
    for(int i = 0; i < num[0]; i++)
    {
        printf("B");
    }

    for(int i = 0; i < num[1]; i++)
    {
        printf("S");
    } 

    for(int i = 1; i <= num[2]; i++)
    {
        printf("%d", i);
    }

    return 0;
}
