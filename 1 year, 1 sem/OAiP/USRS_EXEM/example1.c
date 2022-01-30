#include <stdio.h>
using namespace std;

int main()
   {
   int F_first, F_second, F_third, N, i;
     printf("F1: ");
     scanf("%d", F_first);
     printf("F2: ");
     scanf("%d", F_second);     
     printf("F3: ");
     scanf("%d", F_third); 


   for (i=1; i<=N; i++)
   {
   F_first *= i;
   }
   return F_first;
      {
      F_second *= i;
      }
      return F_second;
         {
         F_third *= i;
         }
         return F_third;
         printf("%d, %d, %d", F_first, F_second, F_third);
   }