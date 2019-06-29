#include <iostream>
#include <math.h>

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int m, n, i = 2, flag = 0;
    std::cin >> m >> n;

    while (flag < n)
    {
        if (isPrime(i))
        {
            flag++;
            if (flag >= m)
            {
                std::cout << i;
                if (flag != n)
                {
                    (flag - m + 1) % 10 ? std::cout << " " : std::cout << std::endl;
                }
            }
        }
        i++;
    }

    return 0;
}
