#include "base.h"

int b2d(int n) {
    int mul =1, dec = 0;
    while(n!= 0) {
        dec+= (n%10)*mul;
        mul*=2;
        n/=10;
    }
    return dec;
}

int main(void) {
    clear();

    // printf("%d\n", b2d(101));
    // printf("%d\n", b2d(10001));
    // printf("%d\n", b2d(10111));
    // printf("%d\n", b2d(10101));
    // printf("%d\n", b2d(10000));
    // printf("%d\n", b2d(1100));






    return 0;
}