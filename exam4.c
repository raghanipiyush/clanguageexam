#include <stdio.h>
int main()
{
    int a[3], b[3], sum[3];
    int *p1, *p2, *p3;
    int i;
    printf("Enter 3 elements for first array:\n");
      for(i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    printf("Enter 3 elements for second array:\n");
      for(i = 0; i < 3; i++)
        scanf("%d", &b[i]);

    p1 = a;
    p2 = b;
    p3 = sum;

       for(i = 0; i < 3; i++){
	    *(p3 + i) = *(p1 + i) + *(p2 + i);
    }
      printf("Sum of arrays:\n");
    for(i = 0; i < 3; i++){
	printf("%d ", *(p3 + i));
    }
}