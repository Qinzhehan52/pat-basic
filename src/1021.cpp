#include <iostream>
#include <string>

int stastics[10] = {0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0};

int main()
{
    std::string tmp;
    std::cin >> tmp;

    for (char c : tmp)
    {
        if (c == '\n' || c == '\0')
        {
            break;
        }
        stastics[c - '0']++;
    }

    bool flag = false;

    for (int i = 0; i < 10; i++)
    {
        if (stastics[i])
        {
            if (flag)
            {
                std::cout << std::endl;
            }
            else
            {
                flag = true;
            }

            std::cout << i << ":" << stastics[i];
        }
    }
}