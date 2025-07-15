#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        int grade;
        scanf("%d", &grade);

        if (grade < 38) {
            printf("%d\n", grade); 
            int remainder = grade % 5;
            int nextMultiple = grade + (5 - remainder);

            if ((nextMultiple - grade) < 3) {
                printf("%d\n", nextMultiple);  
            } else {
                printf("%d\n", grade); 
            }
        }
    }

    return 0;
}
