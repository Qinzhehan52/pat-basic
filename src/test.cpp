#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::string line;
    std::string target;

    char str[101];

    gets(str);
    target = str;

    for (int i = 0; i < target.length(); i++)
    {
        target[i] = tolower(target[i]);
    }

    while (gets(str))
    {
        std::string b = str, c = b;

        for (int i = 0; i < b.length(); i++)
        {
            b[i] = tolower(b[i]);
        }
        
        int pos = b.find(target, 0);
        while (pos != std::string::npos)
        {
            b.erase(pos, target.length());
            c.erase(pos, target.length());
            pos = b.find(target, pos);
        }

        pos = c.find(" ", 0);
        while (pos != std::string::npos)
        {
            c.erase(pos, 1);
            pos = c.find(" ", 0);
        }

        std::cout << c << std::endl;

    }

    return 0;
}