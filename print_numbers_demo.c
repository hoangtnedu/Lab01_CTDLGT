#include <stdio.h>

void print_numbers(int s, int e)
{
    if (e > 100 || s > e)
    {
        return;
    }
    for (int i = s; i <= e; i++)
    {
        printf("Number %d\n", i); 
    }
}

int main()
{
    int s;
    int e;
    s = 1;
    e = 100;
    print_numbers(s, e);
    return 0;
}