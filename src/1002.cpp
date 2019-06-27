#include <iostream>
#include <stdio.h>
using namespace std;

char pinyin[10][10] = {
    "ling",
    "yi",
    "er",
    "san",
    "si",
    "wu",
    "liu",
    "qi",
    "ba",
    "jiu"
};

void putout_num(int sum)
{
    if (sum / 10 != 0)
    {
        putout_num(sum / 10);
        printf(" ");
    }
    printf("%s", pinyin[sum % 10]);
}

int main()
{
    char nums[100];

    for(int i = 0; i < 100; i++)
    {
        nums[i] = 0;
    }
    scanf("%s", nums);

    int i = 0;

    int sum = 0;

    while(nums[i] != 0)
    {
        sum += nums[i] - '0';
        i++;
    }

    putout_num(sum);

    return 0;
}
