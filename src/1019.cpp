#include <iostream>
#include <algorithm>
#include <stdio.h>

bool cmp(int x, int y)
{
    return x > y;
}

int digital(const int *x)
{
    return x[0] * 1000 + x[1] * 100 + x[2] * 10 + x[3];
}

int calc(int tmp)
{
    int a[4], b[4];
    for (int i = 0; i < 4; i++)
    {
        a[3 - i] = tmp % 10;
        b[3 - i] = tmp % 10;
        tmp /= 10;
    }

    std::sort(a, a + 4, cmp);
    std::sort(b, b + 4);

    int res = digital(a) - digital(b);

    std::cout << a[0] << a[1] << a[2] << a[3];
    std::cout << " - ";
    std::cout << b[0] << b[1] << b[2] << b[3];
    std::cout << " = ";

    tmp = res;

    printf("%04d", res);

    if (res != 6174)
    {
        std::cout << std::endl;
    }

    return res;
}

int main()
{
    int tmp;

    std::cin >> tmp;

    do
    {
        tmp = calc(tmp);
    } while (tmp != 6174 && tmp != 0);

    return 0;
}
