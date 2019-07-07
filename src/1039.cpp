#include <iostream>
#include <map>

int main()
{
    std::map<char, int> supply, require;

    char s[1001], r[1001];

    std::cin.getline(s, 1001);

    for (char c : s)
    {
        if (c == '\0' || c == '\n')
        {
            break;
        }
        if (supply.find(c) == supply.end())
        {
            supply[c] = 1;
        }
        else
        {
            supply[c]++;
        }
    }

    std::cin.getline(r, 1001);

    for (char c : r)
    {
        if (c == '\0' || c == '\n')
        {
            break;
        }
        if (require.find(c) == require.end())
        {
            require[c] = 1;
        }
        else
        {
            require[c]++;
        }
    }

    int more = 0, less = 0;
    bool flag = true;

    for (auto it = require.begin(); it != require.end(); it++)
    {
        if (supply[(*it).first] < (*it).second)
        {
            flag = false;
            less += (*it).second - supply[(*it).first];
        }
        else
        {
            more += supply[(*it).first] - (*it).second;
        }
    }

    if (flag)
    {
        for (auto it = supply.begin(); it != supply.end(); it++)
        {
            if (require.find((*it).first) == require.end())
            {
                more += (*it).second;
            }
        }
        
    }
    
    flag ? std::cout << "Yes " << more : std::cout << "No " << less;
}