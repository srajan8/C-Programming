#include "base.h"

int isprime(int n) {
    for (int i = 2; i < sqrt(n); i++) {
        if(n%i ==0) return 0;
    }
    return 1;
}

int main(void) {
    clear();
    int n= 57;
    printf("%d", isprime(n));
}