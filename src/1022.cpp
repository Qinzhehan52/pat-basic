#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

int main()
{
    unsigned int A, B, D, tmp;
    std::vector<unsigned int> vec;

    std::cin >> A >> B >> D;
    tmp = A + B;

    while (tmp)
    {
        vec.push_back(tmp % D);
        tmp = tmp / D;
    }

    bool flag = false;

    std::reverse(vec.begin(), vec.end());

    for (unsigned int i : vec)
    {
        if (i)
        {
            flag = true;
        }

        if (flag)
        {
            std::cout << i;
        }
    }

    if (vec.size() == 0)
    {
        std::cout << 0;
    }
    
}