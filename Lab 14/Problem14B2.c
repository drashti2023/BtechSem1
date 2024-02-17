#include<stdio.h>
#include<math.h>
int main() {
    int i,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int numbers[n];

    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }	

    double sum = 0;
    double product = 1;
    double reciprocal_sum = 0;
    double average, geometric_mean, harmonic_mean;

    for(i=0;i<n;i++) {
        sum += numbers[i];
        product *= numbers[i];
        reciprocal_sum += 1.0 / numbers[i];
    }

    average = sum / n;
    geometric_mean = pow(product, 1.0 / n);
    harmonic_mean = n / reciprocal_sum;

    printf("The average of the elements is %.2lf\n", average);
    printf("The geometric mean of the elements is %.2lf\n", geometric_mean);
    printf("The harmonic mean of the elements is %.2lf\n", harmonic_mean);

    return 0;
}
