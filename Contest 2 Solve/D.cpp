#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int zerocount = 0, onecount = 0;
    int flag = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '0') {
            zerocount++;
            onecount = 0;
        } else if (s[i] == '1') {
            onecount++;
            zerocount = 0;
        }

        if (zerocount >= 7 || onecount >= 7) {
            printf("YES\n");
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("NO\n");

    return 0;
}
