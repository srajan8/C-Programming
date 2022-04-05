#include "base.h"

void multiply(int A[][2], int B[][2]) {
    int C[2][2] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", A[i][0]*B[0][j] + A[i][1]*B[1][j]);
}
        printf("\n");
   }   }

int main(void) {
    clear();
    int a[2][2] = {{1, 0}, {2, 4}}, b[2][2] = {{6, 8}, {4, 3}};
    multiply(a, b);
    return 0;
}