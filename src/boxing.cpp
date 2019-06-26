#include <string>
#include <stdio.h>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    map<string, int> M;

    int in[2002];

    while (scanf("%d", &n) != EOF && n != 0)
    {
        char str1[50], str2[50];

        for (int i = 0; i < 2 * n; i++)
        {
            /* code */
            in[i] = 0;
        }
        M.clear();

        int idx;
        for (int i = 0; i < n; i++)
        {
            string a, b;
            scanf("%s %s", str1, str2);
            a = str1; b = str2;
            int idxa, idxb;

            
            if (M.find(a) == M.end()) {
                idxa = idx;
                M[a] = idx++;
            } 
            else
            {
                idxa = M[a];
            }
            
            if (M.find(b) == M.end()) {
                idxb = idx;
                M[b] = idx++;
            } 
            else
            {
                idxb = M[b];
            }
            in[idxb] ++;
        }

        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            
            if (in[i] == 0) {
                cnt ++;
            }
        }

        puts(cnt == 1 ? "YES" : "NO");
        

    }
    return 0;
}
