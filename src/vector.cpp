#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> vec;

    int i;

    std::cout << "vector size = " << vec.size() << std::endl;

    
    for(i = 0; i < 5; i++)
    {
        /* code */
        vec.push_back(i);
    }

    std::cout << "extended vector size= " << vec.size() << std::endl;

    
    for(i = 0; i < 5; i++)
    {
        /* code */
        std::cout << "value of vec [" << i << "] = " << vec[i] << std::endl;
    }

    auto v = vec.begin();
    while(v != vec.end()) {
        std::cout << "value of v = " << *v << std::endl;
        v++;
    }
        

    return 0;
}
