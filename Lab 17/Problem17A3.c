#include <stdio.h>

int main() {
    int n1, n2, sum;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    ptr1 = &n1;
    ptr2 = &n2;

    sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}
