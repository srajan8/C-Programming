#include "base.h"

int length(char* a){
    int len =0;
    while(a[len] != '\0') len++;
    return len;
}

int minimum(int a, int b) {
    return a<b? a:b;
}

int compare(char *a, char *b) {
    int min = minimum(length(a), length(b));
    for (int i = 0; i < min; i++) {
        if((int)a[i] > (int)b[i]) return -1;
        else if((int)a[i] < (int)b[i]) return 1;
    }
    if(length(a) > length(b)) return -1;
    else if(length(a) < length(b)) return 1;
    return 0;
}

void concatenate(char* a, char*b) {
    char c[20];
    int i, j;
    for (i = 0; i < length(a); i++) {
        c[i] = a[i];
    }
    for (j = 0; j < length(b); j++) {
        c[i+j] = b[j];
    }
    c[i+j] = '\0';
    printf("%s", c);
}


int main(void) {
    clear();

    // char * a= "Hello", *b = "HelloWOrld";
    // printf("%d", compare(b, a));
    // concatenate("Hello", "World");
    // printf("%d", length("Hello"));










    return 0;
}