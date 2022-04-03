#include "base.h"

int perimeter(int len, int breadth) {
    return (len + breadth) * 2;
}

float cube(float n) {
    return n*n*n;
}

//  Comments

int average(int a, int b, int c) {
    return (a+b+c)/2;
}

int isdigit(int n) {
    if(n >= '0' && n <= '9') return 1;
    return 0;
}

int smaller(int a, int b) {
    return a>b? b:a;
}


int Armstrong(int n) {
    int sum = 0, copy = n, i;
    // itoa(n, Arr, 10);
    while(copy != 0) {
        i = copy % 10;
        copy /= 10;
        sum += i*i*i;
    }
    return n == sum;
}

int isprime(int n) {
    for (int i = 2; i < sqrt((double)n); i++) {
        if(n % i == 0) {
            // printf("%d not prime bcz %d\n", n, i);
            return 0;
        }
    }
    // printf("%d is prime\n", n);
    return 1;
}

void primerange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if(isprime(i)) printf("%d ", i);
    }
    printf("\n");
}

int sumofdigits(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largest(int * Arr, int size) {
    int max = Arr[0];
    for (int i = 0; i < size; i++) {
        if(Arr[i] > max) max = Arr[i];
    }
    return max;
}

void reverse(char * string) {
    char copy[strlen(string)];
    strcpy(copy, string);
    for (int i = 0; i < strlen(string); i++) {
        char x = string[i];
        if(islower(string[i]))  copy[i] = string[i] - 32;
        if(isupper(string[i]))  copy[i] = string[i] + 32;
    }
    printf("%s", copy);
    return copy;
}

// Write a program to print the highest frequency character in a string
char highestf(char * string) {
    // char arr[strlen(string)];
    int len = strlen(string);
    int max = 0;
    char maxC;
    for (int i = 0; i < len; i++) {
        int count = 0;
        for (int j = i + 1; j < len; j++) {
            if(string[j] == string[i]) count++;
        }
        if(count > max) {
            max = count;
            maxC = string[i];
        }
    }
    return maxC;
}

void removeSpace(char * string) {
    int j, len = strlen(string);
    char * copy;
    strcpy(copy, string);
    for (int i = 0; i < len; i++) {
        if(copy[i] == ' ') {
            for (j = i; j < len - 1; j++) {
                copy[j] = copy[j + 1];
            }
            copy[j] = '\0';
        }
    }
    printf("%s", copy);
}

/*
    A memory leak is an unintentional form of memory consumption whereby the developer fails to free an allocated block of memory when no longer needed.

    Dangling pointers and wild pointers in computer programming are pointers that do not point to a valid object of the appropriate type. 

*/


int main(void) {
    clear();
    // printf("%d", Armstrong(153));
    // printf("%d", isprime(157));
    // primerange(3, 45);
    // printf("%d", sumofdigits(134423));

    // int arr[] = {3, 5, 7, 233, 56, 343};
    // printf("%d", largest(arr, 6));

    // reverse("Hello");

    // printf("%c %c\n", 'c', 'c' -2);
    // printf("%c", 'a'- 32);

    // printf("%c", highestf("Heloo"));
    // printf("%c", highestf("Helloo"));
    // printf("%c", highestf("Heellooo"));

    // removeSpace("He is a good man");

    return 0;
}