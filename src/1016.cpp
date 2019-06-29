#include <iostream>

int main()
{
    int a, da, pa = 0, b, db, pb = 0;
    std::cin >> a >> da >> b >> db;

    while (a != 0)
    {
        if (a % 10 == da)
        {
            pa = pa * 10 + da;
        }
        a = a / 10;
    }

    while (b != 0)
    {
        if (b % 10 == db)
        {
            pb = pb * 10 + db;
        }
        b = b / 10;
    }
    std::cout << pa + pb; 
}