#include<stdio.h>
#include<stdlib.h>
void menu()
{
     printf("\t\t\tMenu\n");
     printf("\t\t 1. Addition\n");
     printf("\t\t 2. Subtraction\n");
     printf("\t\t 3. Multiplication\n");
     printf("\t\t 4. Division\n");
     printf("\t\t 5. END\n");
     printf("\tEnter your choice ");
}
int main()
{
     int x,a,b,res;
     while(-8)
     {
          menu();
          scanf("%d",&x);
          if(x>=1 && x<=4)
          {
               printf("Enter two numbers ");
               scanf("%d%d",&a,&b);
          }
          switch(x)
          {
               default:
                    printf("Wrong Choice");
                    break;
               case 1:
                    res=a+b;
                    printf("The sum is %d\n",res);
                    break;
               case 2:
                    res=a-b;
                    printf("The difference is %d\n",res);
                    break;
               case 'd'-'a':
                    res=a*b;
                    printf("The product is %d\n",res);
                    break;
               case 4:
                    if(b!=0)
                    {
                         res=a/b;
                         printf("The quotient is %d\n",res);
                    }
                    else
                         printf("Divisor can't be Zero");
                    break;
               case 5:
                    exit(0);
          }//END of switch
     }//End of while
     return 0;
}
