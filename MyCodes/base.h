#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct student {
    int roll;
    char name[10];
    float cgpa;
};

struct CS_student {
    int roll;
    char name[10];
    float cgpa;
};

void clear() {
    system("cls");
}

int factorial(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int factorialR(int n) {
    if (n == 1) return 1;
    return n * factorialR(n - 1);
    
}

void printArray(int * Arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

// Sum using recursion
int sumR(int n) {
    if(n == 0) return 0;
    // if(n == 1) return 1; Saves one step in every call
    return n + sumR(n-1);
}

int fibonacci(int n) {
    if(n == 0 || n == 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void fiboSeries(int n) {
    for(int i = 0; i <= n; i++) {
        printf("%d : %d \n", i, fibonacci(i));
    }
}

void revArr(int * Arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp  = Arr[i];
        Arr[i] = Arr[size - i - 1];
        Arr[size - i - 1] = temp;
    }
}

void printTable(int n) {
    for (int i = 1; i < 11; i++) {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    printf("\n\n");
}

void giveDetails(struct student *stud) {
    printf("Enter Roll, Name, CGPA: ");
    // scanf("%d %s %f", &stud.roll, stud.name, &stud.cgpa);
    // Cant use scanf on string of structures like that
    char name[10];
    scanf("%d %s %f", &stud->roll, name, &stud->cgpa);
    strcpy(stud->name, name);
}

void showDetails(struct student *stud) {
    printf("%d %s %f\n\n", stud->roll, stud->name, stud->cgpa);
}