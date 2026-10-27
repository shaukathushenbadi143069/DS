#include <stdio.h>

int main() {
    int tree[3] = { 6, 5, 7};
    int size = 7;

    for (int i = 0; i < 3; i++) {
        printf("Parent: %d\n", tree[i]);

        if (2 * i + 1 < 3) {
            printf("  Left child: %d\n", tree[2 * i + 1]);
        }

        if (2 * i + 2 < 3) {
            printf("  Right child: %d\n", tree[2 * i + 2]);
        }

        printf("\n");
    }

    return 0;
}
