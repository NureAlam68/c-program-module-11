#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[55], t[55];
    
    scanf("%d", &n);
    while (n--) {
        scanf("%s %s", s, t);
        
        int len_s = strlen(s);
        int len_t = strlen(t);
        int min_len = len_s < len_t ? len_s : len_t;

        for (int i = 0; i < min_len; i++) {
            printf("%c%c", s[i], t[i]);
        }

        if (len_s > len_t) {
            printf("%s", s + min_len);
        } else if (len_t > len_s) {
            printf("%s", t + min_len);
        }

        printf("\n");
    }

    return 0;
}
