#include <iostream>
#include <string>

int weights[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char checkCodes[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main(int argc, char const *argv[])
{
    int n, e = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::string idNum;
        std::cin >> idNum;
        int checkNum = 0;
        bool flag = false;

        for (int j = 0; j < 17; j++)
        {
            if (idNum[j] > '9' || idNum[j] < '0')
            {
                flag = true;
                break;
            }
            checkNum += weights[j] * (idNum[j] - '0');
        }

        if (flag || checkCodes[checkNum % 11] != idNum[17])
        {
            if (e)
            {
                std::cout << std::endl;
            }
            e++;
            std::cout << idNum;
        }
    }

    if (e == 0)
    {
        std::cout << "All passed";
    }

    return 0;
}
