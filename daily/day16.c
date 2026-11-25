//password
#include <stdio.h>
#include <string.h>

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {

        char str[1000];

        scanf("%s", str);

        int n = strlen(str);

        int lower = 0, upper = 0;
        int digit = 0, special = 0;

        // Check lowercase anywhere
        for (int i = 0; i < n; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                lower = 1;
            }
        }

        // Check uppercase, digit and special
        // strictly inside the password
        for (int i = 1; i < n - 1; i++) {

            if (str[i] >= 'A' && str[i] <= 'Z') {
                upper = 1;
            }

            if (str[i] >= '0' && str[i] <= '9') {
                digit = 1;
            }

            if (str[i] == '@' || str[i] == '#' ||
                str[i] == '%' || str[i] == '&' ||
                str[i] == '?') {
                special = 1;
            }
        }

        // Check all conditions
        if (lower && upper && digit && special && n >= 10) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
