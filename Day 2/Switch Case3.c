#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b,res;
     char x;
     printf("\t\t\tMenu\n");
     printf("\t\t A. Addition\n");
     printf("\t\t B. Subtraction\n");
     printf("\t\t C. Multiplication\n");
     printf("\t\t D. Division\n");
     printf("\t\t E. END\n");
     printf("\tEnter your choice ");
     scanf("%c",&x);
     printf("Enter two numbers ");
     scanf("%d%d",&a,&b);
     switch(x)
     {
               default:
                    printf("Wrong Choice");
                    break;
               case 'B':
               case 'b':
                    res=a-b;
                    printf("The difference is %d\n",res);
                    break;
               case 'C':
               case 'c':
                    res=a*b;
                    printf("The product is %d\n",res);
                    //break;
               case 'A':
               case 'a':
                    res=a+b;
                    printf("The sum is %d\n",res);
                    break;
               case 'd':
               case 'D':
                    if(b!=0)
                    {
                         res=a/b;
                         printf("The quotient is %d\n",res);
                    }
                    else
                         printf("Divisor can't be Zero");
                    break;
               case 'e':
               case 'E':
                    exit(0);

     }//END of switch
     return 0;
}
