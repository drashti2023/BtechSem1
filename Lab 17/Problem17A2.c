#include<stdio.h>
int main(){
    int num = 10;
    float fnum = 3.14;
    double dnum = 2.71828;
    char ch = 'D';

    int *intPtr = &num;
    float *floatPtr = &fnum;
    double *doublePtr = &dnum;
    char *charPtr = &ch;

    printf("Value of integer: %d\n", *intPtr);
    printf("Value of float: %.2f\n", *floatPtr);
    printf("Value of double: %.5lf\n", *doublePtr);
    printf("Value of character: %c\n", *charPtr);

    return 0;
}
