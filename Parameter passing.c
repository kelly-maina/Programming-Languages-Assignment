#include <stdio.h>

void passByValue(int x);
void passByVariable(int *x);
void passByReference(int x);  // Note: This is only applicable in C++

int main() {
    int num = 5;

    printf("Before passByValue: num = %d\n", num);
    passByValue(num);
    printf("After passByValue: num = %d\n", num);

    printf("\nBefore passByVariable: num = %d\n", num);
    passByVariable(num);
    printf("After passByVariable: num = %d\n", num);

    printf("\nBefore passByReference: num = %d\n", num);
    passByReference(num);
    printf("After passByReference: num = %d\n", num);

    return 0;
}

void passByValue(int x) {
    x = 10;
    printf("Inside passByValue: x = %d\n", x);
}

void passByVariable(int *x) {
    *x = 20;
    printf("Inside passByVariable: *x = %d\n", *x);
}

void passByReference(int x) {
    x = 30;
    printf("Inside passByReference: x = %d\n", x);
}
