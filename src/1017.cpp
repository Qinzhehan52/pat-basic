#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string A;
    int B, Q;
    std::vector<int> vA;

    std::cin >> A >> B;


    for (char c : A)
    {
        vA.push_back(c - '0');
    }

    int remain = 0;

    bool flag = false;

    for (auto it = vA.begin(); it != vA.end(); it++)
    {
        *it = *it + remain * 10;
        remain = *it % B;
        *it = *it / B;

        if (!flag && *it || vA.size() == 1)
        {
            flag = true;
        }

        if (flag)
        {
            std::cout << *it;
        }
    }

    std::cout << " " << remain;
}