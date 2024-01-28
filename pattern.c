/*Debug and fix the code so that it can print the below pattern.

Pattern:

2 4
2 4
2 4
2 4  */


#include <stdio.h>
int main()
{
 for(int i=1;i <= 4 ;i++)
 {
  for( z = 1 ; z <= 4 ; z++)
  {
  if( z % 3 == 0)
  {
  printf("%d ",z);
  }
  else
  {
  printf(" ");
  }
  }
   printf("\n");
 }
 return 0;
}

