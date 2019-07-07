#include <map>
#include <iostream>
#include <vector>

int main()
{
    std::map<int, int> scores;

    int total;

    std::cin >> total;

    for (int i = 0; i < total; i++)
    {
        int tmp;
        std::cin >> tmp;

        if (scores.find(tmp) == scores.end())
        {
            scores[tmp] = 1;
        }
        else
        {
            scores[tmp]++;
        }
    }

    int search;
    std::vector<int> vSearch;

    std::cin >> search;

    for (int i = 0; i < search; i++)
    {
        int tmp;
        std::cin >> tmp;
        vSearch.push_back(tmp);
    }

    for (auto it = vSearch.begin(); it != vSearch.end(); it++)
    {
        if (it != vSearch.begin())
        {
            std::cout << " ";
        }
        std::cout << scores[*it];
    }
}