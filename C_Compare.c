// Given two strings X and Y . Print the smallest lexicographical one.
#include <stdio.h>
#include <string.h>
int main()
{
    char x[21], y[21];
    scanf("%s\n%s", &x, &y);

    int val = strcmp(x,y);

    if(val < 0)
    {
        printf("%s", x);
    }
    else if(val > 0)
    {
        printf("%s", y);
    }
    else if(val == 0)
    {
        printf("%s", x);
    }
    return 0;
}