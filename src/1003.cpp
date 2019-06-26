#include <stdio.h>
#include <string>
#include <vector>

int check_a(std::string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != 'A' && str[i] != 'P' && str[i] != 'T')
        {
            return 0;
        }
    }
    return 1;
}

int check_b(std::string str)
{
    std::string x1, x2;

    int p_pos = str.find('P');

    if (p_pos != std::string::npos && str[p_pos + 1] == 'A' && str[p_pos + 2] == 'T')
    {
        x1 = str.substr(0, p_pos);
        x2 = str.substr(p_pos + 3, str.size() - p_pos - 3);
        if (x1.compare(x2) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int check(std::string str)
{
    if (!check_a(str))
    {
        return 0;
    }

    
    if (check_b(str)) 
    {
        return 1;
    }
    

    int t_pos, p_pos;
    t_pos = str.find('T');
    p_pos = str.find('P');

    if (p_pos == std::string::npos || t_pos == std::string::npos || t_pos - p_pos < 2)
    {
        return 0;
    }

    for (int i = p_pos + 1; i < t_pos; i++)
    {
        if (str[i] != 'A')
        {
            return 0;
        }
    }

    std::string a, b, c, ca;

    a = str.substr(0, p_pos);
    b = str.substr(p_pos + 1, t_pos - p_pos - 2);
    ca = str.substr(t_pos + 1, str.size() - t_pos - 1);

    c = ca.substr(0, ca.size() - a.size());
    str = a + "P" + b + "T" + c;

    return check(str);

    return 1;
}

int main(int argc, char const *argv[])
{
    std::vector<std::string> vec;
    vec.clear();

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char tmp[100];
        std::string str;

        scanf("%s", tmp);
        str = tmp;

        vec.push_back(str);
    }

    for (int i = 0; i < n; i++)
    {
        check(vec[i]) ? printf("YES") : printf("NO");
        if (i != vec.size() - 1)
        {
            printf("\n");
        }
    }

    return 0;
}
