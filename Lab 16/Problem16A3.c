#include <stdio.h>

int main() {
    int students = 20;
    int rollMarks[students][2];
    int i;
    
    printf("Enter the roll number and marks for each student:\n");
    
    for ( i = 0; i < students; i++) {
        printf("Student %d:\n", i+1);
        
        printf("Roll Number: ");
        scanf("%d", &rollMarks[i][0]);
        
        printf("Marks: ");
        scanf("%d", &rollMarks[i][1]);
    }
    
    printf("Roll Number and Marks of the students:\n");
    
    for ( i = 0; i < students; i++) {
        printf("Student %d - Roll Number: %d, Marks: %d\n", i+1, rollMarks[i][0], rollMarks[i][1]);
    }
    
    return 0;
}
