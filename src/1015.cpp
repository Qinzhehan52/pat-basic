#include <iostream>
#include <vector>
#include <algorithm>

struct Person
{
    int num;
    int talent;
    int moral;
};

bool cmp(Person a, Person b)
{
    
    if (a.moral + a.talent == b.moral + b.talent) {
        if (a.moral == b.moral) {
            return a.num < b.num;
        }
        return a.moral > b.moral;
    }
    
    return a.moral + a.talent > b.moral + b.talent;
}

int main(int argc, char const *argv[])
{
    std::vector<Person> all, moral, none, other;

    int num, low, high;

    std::cin >> num >> low >> high;

    for (int i = 0; i < num; i++)
    {
        Person p;

        std::cin >> p.num >> p.moral >> p.talent;
        
        if (p.talent < low || p.moral < low) {
            continue;
        }

        if (p.talent >= high && p.moral >= high)
        {
            all.push_back(p);
        }

        else if (p.moral >= high && p.talent < high)
        {
            moral.push_back(p);
        }

        else if (p.moral < high && p.talent < high && p.moral >= p.talent)
        {
            none.push_back(p);
        }

        else if (p.moral >= low && p.talent >= low)
        {
            other.push_back(p);
        }
    }

    int total = all.size() + moral.size() + none.size() + other.size();
    
    std::cout << total;

    if (total)
    {
        std::cout << std::endl;
    }
    
    std::sort(all.begin(), all.end(), cmp);
    std::sort(moral.begin(), moral.end(), cmp);
    std::sort(none.begin(), none.end(), cmp);
    std::sort(other.begin(), other.end(), cmp);

    for (auto it = all.begin(); it != all.end(); it++)
    {
        std::cout << (*it).num << " " << (*it).moral << " " << (*it).talent;

        if (moral.size() || none.size() || other.size() || it != all.end())
        {
            std::cout << std::endl;
        }
    }

    for (auto it = moral.begin(); it != moral.end(); it++)
    {
        std::cout << (*it).num << " " << (*it).moral << " " << (*it).talent;

        if (none.size() || other.size() || it != moral.end())
        {
            std::cout << std::endl;
        }
    }

    for (auto it = none.begin(); it != none.end(); it++)
    {
        std::cout << (*it).num << " " << (*it).moral << " " << (*it).talent;

        if (other.size() || it != other.end())
        {
            std::cout << std::endl;
        }
    }

    for (auto it = other.begin(); it != other.end(); it++)
    {
        std::cout << (*it).num << " " << (*it).moral << " " << (*it).talent;

        if (it != other.end())
        {
            std::cout << std::endl;
        }
    }

    return 0;
}