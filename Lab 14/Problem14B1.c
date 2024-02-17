#include <stdio.h>
int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i,sum = 0;
    int count = 0;
    float average;

    for(i=0;i<size;i++) {
        sum += numbers[i];
    }

    average=(float)sum/size;

    for(i=0;i<size;i++) {
        if(numbers[i]>average) {
            count++;
        }
    }

    printf("The average of the numbers is %f\n", average);
    printf("The count of numbers higher than the average is %d\n", count);

    return 0;
}
