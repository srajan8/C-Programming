#include "base.h"

int reverse(int num) {
    int sum = 0;
    while(num != 0) {
        sum = sum*10 + num%10;
        num/= 10;
    }
    return sum;
}

int main() {
    clear();

    int num = 3452;
    printf("%d", reverse(num));


    return 0;
}