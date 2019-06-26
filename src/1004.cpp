#include <stdio.h>
#include <vector>

struct Stu
{
    char name[100];
    char number[100];
    int score;    
};


int main(int argc, char const *argv[])
{
    int n;
    int max_idx = 0, max_score = 0;
    int min_idx = 0, min_score = 101;
    std::vector<Stu> vec;

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        Stu stu;
        scanf("%s %s %d", stu.name, stu.number, &stu.score);
        vec.push_back(stu);
        
        if (stu.score > max_score) {
            max_score = stu.score;
            max_idx = i;
        }

        if (stu.score < min_score) {
            min_score = stu.score;
            min_idx = i;
        }
    }
    
    printf("%s %s\n", vec[max_idx].name, vec[max_idx].number);
    printf("%s %s", vec[min_idx].name, vec[min_idx].number);

    return 0;
}
