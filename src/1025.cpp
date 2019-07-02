#include <iostream>
#include <vector>

#define ADDR_NULL -1

struct Node
{
    std::string addr;
    int data;
    std::string next;
};

int main()
{
    Node tmp;

    int N, K;
    std::string init_addr;

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
            vecIdx.push_back(i);
        }
        vecNode.push_back(tmp);
    }

    for (int i = 0; i < vecNode.size() - 1; i++)
    {
        int j;
        for (j = 0; j < vecNode.size(); j++)
        {
            if (vecNode[j].addr == vecNode[vecIdx[i]].next)
            {
                break;
            }
        }

        vecIdx.push_back(j);
    }

    // 交换开始 

    for (int j = 0; j < N - K; j += K)
    {
        for (int i = 0; i < K / 2; i++)
        {
            std::string tmp_str;
            int tmp;

            tmp_str = vecNode[vecIdx[i]].next;
            vecNode[vecIdx[i]].next = vecNode[vecIdx[K - i - 1]].next;
            vecNode[vecIdx[K -i -1]].next = tmp_str;

            tmp = vecIdx[i];
            vecIdx[i] = vecIdx[K -i -1];
            vecIdx[K -i -1] = tmp; 
        }
    }

    // 交换结束

    //std::cout << "-----" << std::endl;
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