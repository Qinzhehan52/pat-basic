#include <iostream>
#include <vector>
#include <algorithm>

struct MoonCake
{
    double stack;
    double total_price;
};

bool cmp(MoonCake a, MoonCake b)
{
    return a.total_price / a.stack > b.total_price / b.stack;
}

int main()
{
    std::vector<MoonCake> vCake;

    int num;
    double require, total = 0;
    MoonCake m;

    m.stack = 0;
    m.total_price = 0;

    std::cin >> num >> require;

    for (int i = 0; i < num; i++)
    {
        std::cin >> m.stack;
        vCake.push_back(m);
    }

    for (int i = 0; i < num; i++)
    {
        std::cin >> vCake[i].total_price;
    }

    std::sort(vCake.begin(), vCake.end(), cmp);

    auto it = vCake.begin();

    while (require != 0 && it != vCake.end())
    {
        if (require >= (*it).stack)
        {
            total += (*it).total_price;
            require -= (*it).stack;
        }
        else
        {
            total += require * (*it).total_price / (*it).stack;
            require = 0;
        }
        it++;
    }

    printf("%.2f", total);
}
