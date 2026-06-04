#include <stdio.h>
int main()
{
    int i, j;
       for(i = 0; i < 5; i++){
	   
        for(j = 0; j < i; j++){
		  printf("  ");
        }

        for(j = 10 - i; j >= 6; j--)
        {
            printf("%d ", j);
        }
          printf("\n");
    }
}
/*output
10 9 8 7 6
   9 8 7 6
     8 7 6
       7 6
         6

*/