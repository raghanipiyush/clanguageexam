#include<stdio.h>
void check(int n)
{
    if(n % 15 == 0)
        printf("Divisible by 3 and 5");
    else
        printf("Not divisible by 3 and 5");
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
	  check(n);
}
/*output
Enter a number: 30
Divisible by 3 and 5
*/
