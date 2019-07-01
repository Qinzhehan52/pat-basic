/*
这道题自己的解法一直卡case
参考 https://github.com/OliverLew/PAT
 */
#include <stdio.h>

int main()
{
    int exp;
    char line[10000], *p = line;

    scanf("%[^E]E%d", line, &exp);

    if (*p++ == '-')
        putchar('-');

    if (exp >= 0)
    {
        putchar(*p);             //整数位
        for (p += 2; exp; exp--) //跳过小数点
        {
            putchar(*p ? *p++ : '0'); //按照指数输出小数转为整数的部分
        }
        if (*p) //未到 '\0'
        {
            putchar('.'); //输出小数部分
            while (*p)
            {
                putchar(*p++);
            }
        }
    }

    if (exp < 0)
    {
        printf("0.");

        for (exp++; exp; exp++)
        {
            putchar('0'); //先输出指数造成的小数部分，补0
        }

        for (; *p; p++)
        {
            if (*p != '.')
            {
                putchar(*p);
            }
        }
    }

    return 0;
}