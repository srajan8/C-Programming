#include "base.h"

int main (void) {
    clear(); // in base.h
    // printf("Hello World\n");

    // int a = 9;
    // int A = 9;
    // printf("Memory address of a is %d\n", &a);
    // printf("Memory address of A is %d\n", &A);

    // printf("Enter age: ");
    // int age = 0;
    // scanf("%d", &age);
    // printf("Hello %d years old\n", age);

    // Declare multiple values at once
    // int a = 0, b, c = 9;

    // 32 Keywords in C

    // a + b - a, b are operands, + is operator

    // ^ XOR operator

    // printf("%d\n", 4 % 2); zero
    // printf("%d\n", 6 % 4); two
    // printf("%d\n", 0 % 5); zero
    // // printf("%d\n", 5 % 0); Wont run
    // printf("%d\n", -5 % 2); sign is as it is taken
    // // printf("%d\n", -5.7 % 2); Wont run

    // int + int = int
    // int + float = float
    // float + float = float
    // int + double = double
    // double + double = double

    // printf("%d\n", (int)1.99999999);

    // 0 False 1 True 

    // a +=, *=, /=, -= Assignment Operators

    // int x = 56, y = 45 + x;
    // printf("%d %d\n", x, y);

    // single character in char
    // img address = "https://www.researchgate.net/profile/Punit-Raninga/publication/271253673/figure/tbl1/AS:667620638482437@1536184572172/AGE-GROUP-NAME-WITH-ITS-AGE-RANGE.png"

    // int age;
    // printf("Enter Age: ");
    // scanf("%d", &age);

    // if(age < 0) printf("Wrong age");
    // if(age >= 0 && age <= 2) printf("Baby");
    // else if(age >= 3 && age <= 16) printf("Children");
    // else if(age >= 17 && age <= 30) printf("Children");
    // else if(age >= 31 && age <= 45) printf("Adults");
    // else if(age >= 45 && age <= 60) ("Senior Adults");
    // else printf("Retired");

    // Ternary operator => a check b ? A : B;
    // a and b are values, A and B are conditions

    // switch (expression) {
    // multiple cases /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

    // Nested switches, if-else, for, while conditions are valid

    // int x;
    // printf("%d", x = 5); 5

    // for( initialization ; condition ; update) {
    //     Code
    // }

    // break statements works for all nested loop

    // printf("Fact of 5 is %d", factorial(5)); in base.h

    // int Array[] = {1, 4, 6, 8, 12};
    // printArray(Array, 5);

    // printf("Sum: %d", sumR(5)); in base.h

    // printf("%d", factorialR(5)); in base.h

    // Iteration  vs Recursion

    // Stack overflow : Segmentation fault

    // for (int i = 0; i < 10; i++) {
        // printf("%d : %d \n", i, fibonacci(i)); in base.h
    // }
    // fiboSeries(10);


    // Pointers * pointer, & reference
    // %p - hexadecimal, %u - unsigned int

    // int Arr[] = {5, 7, 5, 3, 3, 6, 7};
    // int * ptr = Arr;
    // for (int i = 0; i < sizeof(Arr)/4; i++, ptr++) {
    //     printf("%d ", *ptr);
    // }
    
    // int i = 5, *ptr = &i, **ptrptr = &ptr;
    // printf("%d\n", i);
    // printf("%d\n\n", &i);

    // printf("%d\n", *ptr);
    // printf("%d\n", ptr);
    // printf("%d\n\n", &ptr);

    // printf("%d\n", **ptrptr);
    // printf("%d\n", *ptrptr);
    // printf("%d", ptrptr);

    // call by value vs call by reference

    // temp = a;
    // a = b;
    // b = temp;

    // int subjects = 3;
    // char* subs[] = {"Phy", "Math", "Chem"};
    // int marks[] = {60, 90, 88};
    // for (int i = 0; i < 3; i++) {
    // printf("%s \t %d\n", subs[i], marks[i]);
    // }
    
    // int age = 21;
    // int *ptr = &age;
    // printf("%d\n", *(ptr++));
    // printf("%d", *ptr);

    // int marks[] = {60, 90, 88};
    // int *ptr = &marks[1];
    // printf("%d\n", *(ptr++));
    // printf("%d\n", *(ptr--));
    // printf("%d\n", *(ptr--));
    // printf("%d\n", *(ptr--));

    //  2D Arrays
    // int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
    // printf("%d %d %d %d", arr[0][0], arr[0][1], arr[1][0], arr[1][2]);

    // int school[class][student][subject];
    // 1 School 12 Classes 30 Students 6 Subjects

    // int Arr[] = {34, 56, 3, 78, 72, 77, 12};
    // int size = sizeof(Arr)/ sizeof(int);
    // printArray(Arr, size);
    // revArr(Arr, size); // in base.h
    // printArray(Arr, size);
    
    // printTable(2);
    // printTable(22);
    // printTable(12);

    // \0 null character
    // '' for char, "" for string

    // char * string = "Hello World";
    // printf("%s", string);

    // char fName[10], lName[10];
    // // char *fName, *lName; // why this doesnt work
    // printf("Enter Name: ");
    // scanf("%s", fName);
    // scanf("%s", lName);
    // printf("Hello %s %s", fName, lName);

    // gets and puts
    // char string[20];
    // gets(string);
    // puts(string);
    // puts(string);
    // puts(string);
    // puts(string); // add a new line everytime

    // fgets(string, max_char, stdin);

    // char no[] = "Hello";
    // no = "Bye"; // not a modifiable lvalue

    // int x = strlen("Hello"); //strlen
    // printf("%d", x);

    // char string[10];
    // strcat(string, "Resolve");
    // printf("%s", string);

    // char string[10];
    // strcat(string, "Hello");
    // printf("%s", string);

    // int cmp = strcmp("Hello", "World");
    // printf("%d", cmp);

    // Take a input string
    // int s = 0;
    // char * string;
    // char ch;
    // while(ch != '\n') {
    //     scanf("%c", &ch);
    //     // strcat(string, ch);
    //     string[s] = ch;
    //     s++;
    // }
    // string[s] = '\0';
    // puts(string);

    // struct student Arr[2];
    // for (int i = 0; i < 2; i++) {
    //     giveDetails(&Arr[i]);
    // }
    // 
    // for (int i = 0; i < 2; i++) {
    //     showDetails(&Arr[i]);
    // }
    
    // struct CS_student s1;
    // scanf("%d %s %f", &s1.roll, s1.name, &s1.cgpa);
    // printf("%d %s %.1f\n\n", s1.roll, s1.name, s1.cgpa);
    // printf("%d\n", sizeof(s1.cgpa));
    // printf("%d\n", sizeof(s1.name));
    // printf("%d\n", sizeof(s1.roll));
    // printf("%d", sizeof(s1));

    // struct student s1 = {1, "Srajan", 4.1};
    // puts(s1.name);

    /* RAM is volatile memory Random Access Memory
        operations - create, open, close, read, write
        r - read
        a - append
        w - write
        rb read in binary
        wb write in binary
    */
    // FILE *fptr = fopen("sample.txt", "w");
    // fprintf(fptr, "\nOkay get it?");
    // fclose(fptr);

    // FILE *fptr = fopen("sample.txt", "r");
    // char * string;
    // fscanf(fptr, "%s", string);
    // puts(string);
    // fclose(fptr);


    // FILE *fptr = fopen("sample.txt", "r");
    // char string[100];
    // char c = fgetc(fptr);
    // while (c != EOF) {
    //     printf("%c", c);
    //     c = fgetc(fptr);
    // }
   

    int *ptr = (int*)malloc(4*2);
    ptr[0] = 4;
    ptr[1] = 5;
    printf("%d %d", *(ptr), *(ptr+1));















    return 0;
}