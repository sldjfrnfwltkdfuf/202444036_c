#include<stdio.h>

int main()
{
   int i = 0, j = 0;   

   for(i = 2; i <= 10; i++){
      for(j = 2; j < i; j++){  
         if(i % j == 0)       
            break;             
      }
      if(i == j)              
         printf("%4d", i);     
   }

   printf("\n");

   return 0;
}
