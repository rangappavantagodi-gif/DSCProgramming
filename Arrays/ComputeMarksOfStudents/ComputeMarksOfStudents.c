#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    int marks[n][5];      // Assuming 5 subjects
    int total[n];
    float average[n];
    
    // Input marks
    for(i = 0; i < n; i++) {
        printf("\nEnter marks for Student %d (5 subjects):\n", i + 1);
        total[i] = 0;
        
        for(j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        
        average[i] = total[i] / 5.0;
    }
    
    // Display results
    printf("\n----- Student Results -----\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Total Marks = %d\n", total[i]);
        printf("Average = %.2f\n", average[i]);
    }
    
    return 0;
}
