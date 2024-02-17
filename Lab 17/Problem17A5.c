#include <stdio.h>
int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr;
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    printf("Elements in the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
