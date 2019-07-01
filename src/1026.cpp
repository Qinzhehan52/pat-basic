#include <iostream>
#include <math.h>

#define CLK_TCK 100.0

struct Time
{
    int hour;
    int minute;
    int second;
};


int main()
{
    int begin, end, clk;
    Time time;

    std::cin >> begin >> end;

    clk = round((end - begin) / CLK_TCK);
    
    time.hour = clk / 3600;
    time.minute = clk % 3600 / 60;
    time.second = clk % 60;
    
    printf("%02d:%02d:%02d", time.hour, time.minute, time.second);
}