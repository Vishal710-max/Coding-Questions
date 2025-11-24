// 13)
// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
// 	        1

#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, k;

    for (i = 5; i >= 1; i--) {
        for (k = 1; k < i; k++) {
            printf("  ");
        }
        for (j = 1; j <= 6 - i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

