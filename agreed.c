#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("do you agree?\n");
    {
        if (c == 'y')
        printf("agreed.\n");
    }
    {
        if(c == 'n')
        printf("not agreed\n");
    }

}