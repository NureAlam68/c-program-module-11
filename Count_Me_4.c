// You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears. But if the count is zero, you don't need to prin that.
#include <stdio.h>

int main()
{
    char s[10001];
    scanf("%s", s);

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}
