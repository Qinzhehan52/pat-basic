#include <iostream>
#include <vector>
#include <algorithm>

int nums[10];

int main()
{
    bool flag = true;

    for (int i = 0; i < 10; i++)
    {
        std::cin >> nums[i];

        if (i != 0)
        {
            if (flag && nums[i])
            {
                std::cout << i;

                for (int j = 0; j < nums[0]; j++)
                {
                    std::cout << 0;
                }

                for (int j = 1; j < nums[i]; j++)
                {
                    std::cout << i;
                }
                flag = false;
            }
            else
            {
                for(int j = 0; j < nums[i]; j++)
                {
                    std::cout << i;
                }
            }
            
        }
    }

    if (flag)
    {
        std::cout << 0;
    }
    
}