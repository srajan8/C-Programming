#include "base.h"

struct Student {
    int arr[4];
};

void read(struct Student s) {
    for (int i = 0; i < 4; i++) {
        printf("%d ", s.arr[i]);
    }
    printf("\n");
}
void write(struct Student s) {
    for (int i = 0; i < 4; i++) {
        scanf("%d", &s.arr[i]);
    }
    read(s);
}
int main() {
    clear();

// Implement structures to read, write, compute average- marks and the students scoring above and below the average marks for a class of N students.
    
    struct Student sq;
    write(sq);
    return 0;
}