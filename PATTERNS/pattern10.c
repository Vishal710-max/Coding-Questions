// 10)
// 	1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {
        for (k = 1; k <= 5 - i; k++) {
            printf("   ");
        }
        for (j = 1; j <= i; j++) {
            printf("%2d ", j);
        }
        printf("\n");
    }

    return 0;
}
