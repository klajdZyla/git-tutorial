#include <stdio.h>
#include "espl_lib.h"
int main()
{
   unsigned int nr;
   char ans;
   do {
      printf("Enter a number: ");
      scanf("%d", &nr);
      printf("%s\n", num_to_words(nr));
      printf("Do you want to enter another number? (y/n)\n");
      scanf(" %c", &ans);
   } while(ans=='y');
   return 0;
}