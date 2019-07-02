#include <iostream>
#include <map>

int main()
{
    int n, school, score;
    std::map<int, int> scoreMap;

    std::cin >> n;

    while (n--)
    {
        std::cin >> school >> score;
        if (scoreMap.find(school) == scoreMap.end())
        {
            scoreMap[school] = score;
        } else
        {
            scoreMap[school] += score;
        }
    }

    auto  max_it = scoreMap.begin();

    for (auto it = scoreMap.begin(); it != scoreMap.end(); it++)
    {
        if ((*it).second > (*max_it).second)
        {
            max_it = it;
        }
    }

    std::cout << (*max_it).first << " " << (*max_it).second;
}