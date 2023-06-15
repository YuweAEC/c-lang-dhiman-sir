#include<stdio.h>
#include<stdlib.h>

int isPrime(int);

int main()
{
    int y, y1, y2, s1, s2;
    printf("Enter a Number:-");
    scanf("%d", &y);
    
    if (y<0)
    {
        printf("Negative NO. cannot be prime no");
        exit(0);
    }

    for (y1=2 ; y1 < y/2; y1++)
    {
        y1=isPrime(y1);

        if (s1==1)
        {
            y2=y-y1;
            s2=isPrime(y2);

            if (s2==1)
            {
                printf("%d %d \n", y1, y2);
            }
            
        }
        
    }
    
    
}
