#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::vector<std::string> vec;

    char str[100], tmp[100];
    int j = 0;

    std::cin.getline(str, 100);
    
    for(int i = 0; i < 100; i++)
    {
        if (str[i] != ' ' && str[i] != '\0') {
            tmp[j++] = str[i];
        } 
        else
        {
            tmp[j] = '\0';
            j = 0;
            std::string s = tmp;
            vec.push_back(s);
            if (str[i] == '\0') {
                break;
            }
        }
    }
    
    std::reverse(vec.begin(), vec.end());
    
    
    for(auto it = vec.begin(); it != vec.end(); it++)
    {
        if (it != vec.begin()) {
            std::cout << " ";
        }
        std::cout << *it;
    }
    
    return 0;
}
