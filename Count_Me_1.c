// You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    int count_2 = 0, count_3 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            count_2++;
        }
        else if (a[i] % 3 == 0)
        {
            count_3++;
        }
    }

    printf("%d %d\n", count_2, count_3);
    return 0;
}