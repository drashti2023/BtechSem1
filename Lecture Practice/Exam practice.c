#include <stdio.h>
struct student_record {
    char name[50];
    float percentage;
    char branch[20];
};
int main() {
    struct student_record students[10];
    int i;
     printf("Enter details of 10 students:\n");

    for ( i = 0; i <10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
        printf("Branch: ");
        scanf("%s", &students[i].branch);
    }

    printf("\nStudent details:\n");

    for ( i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Branch: %s\n", students[i].branch);
    }

    return 0;
}
