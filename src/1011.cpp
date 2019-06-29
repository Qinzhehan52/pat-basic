#include <stdio.h>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    int n;
    std::vector<std::vector<long>> vec;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        std::vector<long> arr;

        for (int j = 0; j < 3; j++)
        {
            std::cin >> tmp;
            arr.push_back(tmp);
        }

        vec.push_back(arr);
    }

    for (int i = 0; i < vec.size(); i++)
    {

        if (i)
        {
            printf("\n");
        }

        if (vec[i][0] + vec[i][1] > vec[i][2])
        {
            printf("Case #%d: true", i + 1);
        }
        else
        {
            printf("Case #%d: false", i + 1);
        }
    }

    return 0;
}
