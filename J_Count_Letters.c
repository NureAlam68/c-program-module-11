// Given a string S. Determine how many times does each letter occurred in S.
#include <stdio.h>
#include <string.h>

int main() {
    char s[10000001];
    int freq[26] = {0};

    // input string
    scanf("%s", s);

    // count frequency
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // print in ascending order
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}

