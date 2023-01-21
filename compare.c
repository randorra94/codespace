#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("waht's x?\n");
    int y = get_int("what's y?\n");
    {
        if (x < y)
        printf("x less than y\n");
        else if (x > y)
        printf("x is greater than y\n");
    }
}