#include<stdio.h>
int main()
{
	 int num, firstdigit, lastdigit, sum;

    printf("Enter 3 digit positive integer: ");
    scanf("%d", &num);
     firstdigit = num / 100;
     lastdigit = num % 10;
     
     sum = firstdigit + lastdigit;
     printf("sum of the first and last = %d\n", sum);
}