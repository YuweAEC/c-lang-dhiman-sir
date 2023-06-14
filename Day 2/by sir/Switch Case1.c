#include<stdio.h>
int main()
{
     switch(printf("A"),printf("ABC"),printf("AB"))
     {
          case 1:
               printf("Saswata");
               break;
          case 2:
               printf("Avijit");
               break;
          case 3:
               printf("Sandeep");
               break;
          case 4:
               printf("Sayak");
               break;
          default:
               printf("Asansol");
               break;
          }//END of switch
     return 0;
}
