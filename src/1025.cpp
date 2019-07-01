#include <iostream>
#include <vector>

#define ADDR_NULL -1

struct Node
{
    int addr;
    int data;
    int next;
    int idx = -1;
};

int main()
{
    Node tmp;

    int N, K, init_addr;
    std::vector<Node> vecNode;
    std::vector<int> vecIdx;

    vecNode.clear();
    vecIdx.clear();

    std::cin >> init_addr >> N >> K;

    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp.addr >> tmp.data >> tmp.next;
        if (tmp.addr == init_addr)
        {
            tmp.idx = 0;
            vecIdx.push_back(i);
        }
        vecNode.push_back(tmp);
    }

    for (int i = vecIdx[0]; i < vecNode.size(); i++)
    {
        int j;
        for (j = 0; j < vecNode.size(); j++)
        {
            if (vecNode[j].addr == vecNode[i].next)
            {
                break;
            }
        }

        vecIdx.push_back(j);
    }

    std::cout << "-----" << std::endl;
    for (int i = 0; i < vecIdx.size(); i++)
    {
        std::cout << vecNode[vecIdx[i]].addr << " "; 
        std::cout << vecNode[vecIdx[i]].data << " ";
        std::cout << vecNode[vecIdx[i]].next;

        if (i != vecIdx.size() - 1)
        {
            std::cout << std::endl;
        }
    }

    for (int j = 0; j < N - K; j += K)
    {
        for (int i = 0; i < K / 2; i++)
        {
            int tmp;
            tmp = vecNode[vecIdx[i]].next;
            vecNode[vecIdx[i]].next = vecNode[vecIdx[K - i - 1]].next;
            vecNode[vecIdx[K -i -1]].next = tmp;
        }
    }

    std::cout << "-----" << std::endl;
    for (int i = 0; i < vecIdx.size(); i++)
    {
        std::cout << vecNode[vecIdx[i]].addr << " "; 
        std::cout << vecNode[vecIdx[i]].data << " ";
        std::cout << vecNode[vecIdx[i]].next;

        if (i != vecIdx.size() - 1)
        {
            std::cout << std::endl;
        }
    }
    
}