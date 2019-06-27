#include <algorithm>
#include <vector>
#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int total, reverse;
    std::vector<int> vec;
    int tmp;

    scanf("%d %d", &total, &reverse);
    reverse = reverse % total;

    for (int i = 0; i < total; i++)
    {
        scanf("%d", &tmp);
        vec.push_back(tmp);
    }

    
    std::reverse(vec.begin(), vec.end());
    std::reverse(vec.begin(), vec.begin() + reverse);
    std::reverse(vec.begin() + reverse, vec.end());

    auto it = vec.begin();

    while (it != vec.end())
    {
        if (it != vec.begin())
        {
            std::cout << " ";
        }
        std::cout << *it;
        it++;
    }

    return 0;
}
