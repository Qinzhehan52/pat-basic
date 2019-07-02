#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::string raw, input;

    std::cin >> raw;
    std::cin >> input;

    std::transform(raw.begin(), raw.end(), raw.begin(), ::toupper);
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);

    for (int i = 0; i < raw.length(); i++)
    {
        if (raw.find(raw[i]) == i && input.find(raw[i]) == std::string::npos)
        {
            std::cout << raw[i];
        }
    }
    return 0;
}
