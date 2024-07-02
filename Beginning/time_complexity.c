#include <stdio.h>

int main() {
    int i, j, n, K, count;

    while (scanf("%d", &n) != EOF) {
        count = 0;

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                for (K = 0; K < n; K++) {
                    count = count + 1;
                }
            }
        }

        printf("n = %d, count = %d\n", n, count);
    }

    return 0;
}
