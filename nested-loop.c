#include <stdio.h>

void printPattern(int n) 
{
    int i, j;
    
    // Upper half of the pattern
    for (i = 1; i <= n; i++) // i = 1, 2, 3, 4, 5 (n = 5) 
    {
        for (j = 1; j <= i; j++) // j = 1, 2, 3, 4, 5 (i = 5) 
        {
            printf("%d", i);
            if (j < i) // j = 1, 2, 3, 4 (i = 5) 
            {
                printf("*");
            }
        }
        printf("\t");
        
        for (j = i + n; j <= (i + n) * (i + 1) / 2; j++) // j = 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 (i = 5)  
        {
            printf("%d", j);
            if (j < (i + n) * (i + 1) / 2) // j = 6, 7, 8, 9, 10, 11, 12, 13, 14 (i = 5)  
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    // Lower half of the pattern
    for (i = n - 1; i >= 1; i--) // i = 4, 3, 2, 1 (n = 5) 
    {
        for (j = 1; j <= i; j++)  // j = 1, 2, 3, 4 (i = 4) 
        {
            printf("%d", i);
            if (j < i) 
            {
                printf("*");
            }
        }
        printf("\t");
        
        for (j = i + n; j <= (i + n) * (i + 1) / 2; j++) // j = 10, 11, 12, 13, 14, 15 (i = 4) 
        {
            printf("%d", j);
            if (j < (i + n) * (i + 1) / 2) // j = 10, 11, 12, 13, 14 (i = 4) 
            {
                printf("*"); // j = 10, 11, 12, 13 (i = 4) 
            }
        }
        printf("\n");
    }
}

int main()  // Driver code 
{
    int n; // Number of rows in the pattern 

    printf("Enter the number of rows for the pattern: "); 
    scanf("%d", &n); // Input number of rows from user 

    printPattern(n); // Function call 

    return 0; // Return 0 to operating system 
}
