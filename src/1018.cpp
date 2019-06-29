#include <iostream>
#include <vector>

char table[3] = {'B', 'C', 'J'};

int result(char a, char b)
{
    if ((a == 'C' && b == 'J') || (a == 'J' && b == 'B') || (a == 'B' && b == 'C'))
    {
        return 1;
    }

    if ((b == 'C' && a == 'J') || (b == 'J' && a == 'B') || (b == 'B' && a == 'C'))
    {
        return -1;
    }
    return 0;
}

int main()
{
    int times, a_win_count = 0, b_win_count = 0;

    int a_win[3] = {0, 0, 0}, b_win[3] = {0, 0, 0};

    char a, b;

    std::cin >> times;

    for (int i = 0; i < times; i++)
    {
        std::cin >> a >> b;

        int res = result(a, b);

        if (res == 1)
        {
            a_win_count++;
            switch (a)
            {
            case 'B':
                a_win[0]++;
                break;
            case 'C':
                a_win[1]++;
                break;
            case 'J':
                a_win[2]++;
                break;
            default:
                break;
            }
        }

        if (res == -1)
        {
            b_win_count++;
            switch (b)
            {
            case 'B':
                b_win[0]++;
                break;
            case 'C':
                b_win[1]++;
                break;
            case 'J':
                b_win[2]++;
            default:
                break;
            }
        }
    }

    std::cout << a_win_count << " " << times - a_win_count - b_win_count << " " << b_win_count << std::endl;
    std::cout << b_win_count << " " << times - b_win_count - a_win_count << " " << a_win_count << std::endl;

    int a_max = 0, b_max = 0;

    for (int i = 0; i < 3; i++)
    {
        a_win[a_max] < a_win[i] ? a_max = i : a_max;
        b_win[b_max] < b_win[i] ? b_max = i : b_max;
    }

    std::cout << table[a_max] << " " << table[b_max];
}