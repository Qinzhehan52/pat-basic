#include <iostream>
#include <string>

std::string workdays[7] = {
    "MON",
    "TUE",
    "WED",
    "THU",
    "FRI",
    "SAT",
    "SUN"};

bool isNum(char c)
{
    return c >= '0' && c <= '9';
}

bool isUpperChar(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return true;
    }
    return false;
}

bool isEnChar(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return true;
    }
    if (c >= 'A' && c <= 'Z')
    {
        return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    std::string str[4];

    for (int i = 0; i < 4; i++)
    {
        std::cin >> str[i];
    }

    bool flag = false;
    for (int i = 0; i < 60; i++)
    {
        if (str[0][i] == str[1][i] && !flag && isUpperChar(str[0][i]))
        {
            if (str[0][i] >= 'A' && str[0][i] <= 'G')
            {
                std::cout << workdays[str[0][i] - 'A'] << " ";
                flag = true;
                continue;
            }
        }

        if (str[0][i] == str[1][i] && (isUpperChar(str[0][i]) || isNum(str[0][i])) && flag)
        {
            if (str[0][i] >= 'A' && str[0][i] <= 'N')
            {
                std::cout << str[0][i] - 'A' + 10 << ":";
                break;
            }
            
            if (isNum(str[0][i]))
            {
                std::cout << '0' << str[0][i] << ":";
                break;
            }
            
        }
    }

    for (int i = 0; i < 60; i++)
    {
        if (str[2][i] == str[3][i] && isEnChar(str[2][i]))
        {
            printf("%02d", i);
            break;
        }
    }

    return 0;
}
