#include <stdio.h>

int boolean_and(int a, int b);
int boolean_or(int a, int b);
int boolean_not(int a);

int main() {
    int a, b;

    printf("Enter value for a (0 or 1): ");
    scanf("%d", &a);
    printf("Enter value for b (0 or 1): ");
    scanf("%d", &b);

    printf("a AND b = %d\n", boolean_and(a, b));

    printf("a OR b = %d\n", boolean_or(a, b));

    printf("NOT a = %d\n", boolean_not(a));

    return 0;
}

int boolean_and(int a, int b) {
    return a && b;
}

int boolean_or(int a, int b) {
    return a || b;
}

int boolean_not(int a) {
    return !a;
}
