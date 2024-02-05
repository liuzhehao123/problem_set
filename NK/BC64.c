#include <stdio.h>
int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        //上一半
       for (int i = n+1; i>0; i--) {
            for (int j = i; j>0; j--) {
                printf("* ");
            }
            printf("\n");
        }
        //下一半
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= i; j++) {
                 printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

