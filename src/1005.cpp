#include <stdio.h>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

bool comp(int x, int y)
{
    return x > y;
}

std::vector<int> check(int x)
{
    std::vector<int> vec;

    while (x != 1)
    {
        if (x % 2)
        {
            x = (3 * x + 1) / 2;
        }
        else
        {
            x = x / 2;
        }
        vec.push_back(x);
    }
    return vec;
}

int main(int argc, char const *argv[])
{
    std::map<int, bool> M;
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        M[tmp] = true;
    }

    auto it = M.begin();
    while (it != M.end())
    {
        std::vector<int> vec = check(it->first);

        for (int i = 0; i < vec.size(); i++)
        {
            if (M.find(vec[i]) != M.end())
            {
                //printf("%d ", vec[i]);
                M[vec[i]] = false;
            }
        }
        it++;
    }

    std::vector<int> res;
    it = M.begin();
    while (it != M.end())
    {
        if (it->second)
        {
            res.push_back(it->first);
        }
        it++;
    }
    std::sort(res.begin(), res.end(), comp);

    auto it_v = res.begin();
    while (it_v != res.end())
    {
        if (it_v != res.begin())
        {
            printf(" ");
        }
        printf("%d", *it_v);
        it_v++;
    }

    return 0;
}
