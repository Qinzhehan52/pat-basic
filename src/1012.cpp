#include <stdio.h>
#include <vector>
#include <iostream>

int main(int argc, char const *argv[])
{
    int n, tmp;

    std::vector<int> vec[5];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);

        if (tmp % 5 == 0)
        {
            if (tmp % 2 == 0)
            {
                vec[0].push_back(tmp);
            }
        }
        else
        {
            vec[tmp % 5].push_back(tmp);
        }
    }

    // 0
    tmp = 0;
    if (vec[0].size() == 0)
    {
        std::cout << "N ";
    }
    else
    {
        for (auto num : vec[0])
        {
            if (num % 2 == 0)
            {
                tmp += num;
            }
        }
        std::cout << tmp << " ";
    }

    // 1
    tmp = 0;
    int flag = 1;
    if (vec[1].size() == 0)
    {
        std::cout << "N ";
    }
    else
    {
        for (auto num : vec[1])
        {
            flag ? tmp += num : tmp -= num;
            flag = 1 - flag;
        }
        std::cout << tmp << " ";
    }

    // 2
    vec[2].size() ? std::cout << vec[2].size() << " " : std::cout << "N ";

    //3
    tmp = 0;
    if (vec[3].size() == 0)
    {
        std::cout << "N ";
    }
    else
    {
        for (auto num : vec[3])
        {
            tmp += num;
        }
        printf("%.1f ", (float)tmp / vec[3].size());
    }

    //4
    tmp = 0;
    if (vec[4].size() == 0)
    {
        std::cout << "N";
    }
    else
    {
        for (auto num : vec[4])
        {
            tmp > num ? tmp : (tmp = num);
        }
        std::cout << tmp;
    }

    return 0;
}
