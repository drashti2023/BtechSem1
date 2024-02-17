#include <stdio.h>

int main() {
    int height[5];
    int weight[5];
    int i,count = 0;

    printf("Enter the height and weight of 5 persons:\n");
    for (i=0;i<5;i++){
        printf("Person %d\n", i + 1);
        printf("Height (in cm): ");
        scanf("%d", &height[i]);
        printf("Weight (in kg): ");
        scanf("%d", &weight[i]);

        if (height[i]>170 && weight[i]<50) {
            count++;
        }
    }

    printf("Number of persons with height greater than 170 and weight less than 50: %d\n", count);

    return 0;
}
