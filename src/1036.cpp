#include <iostream>
#include <math.h>

int main()
{
    int width, length;
    char c;

    std::cin >> width >> c;

    length = (int)round((float)width / 2);

    for (int i = 0; i < length; i++)
    {
        if (i)
        {
            std::cout << std::endl;
        }

        if (i == 0 || i == length - 1)
        {
            for (int j = 0; j < width; j++)
            {
                printf("%c", c);
            }
        }
        else
        {
            printf("%c", c);
            for (int j = 0; j < width - 2; j++)
            {
                printf(" ");
            }
            printf("%c", c);
        }
    }
}