// Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int total_work = M1 * D;
        int new_days = total_work / (M1 + M2);

        int reduced_days = D - new_days;

        printf("%d\n", reduced_days);
    }

    return 0;
}
