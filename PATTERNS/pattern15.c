// 15)
// 1 1 1 1 1
//   2 2 2 2
//     3 3 3
//       4 4
// 	        5

#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {
        for (k = 1; k < i; k++) {
            printf("  ");
        }
        for (j = i; j <= 5; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}