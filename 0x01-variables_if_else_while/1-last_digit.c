#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - program will assign a random number to the variable
* Return:0 (succes)
*/

int main(void)
{
int n;
int a;

srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;

if (a > 5)
{
        printf("last digit of %d is %d  and is greater than 5\n", n, a);
}
else if (a == 0)
{
        printf("last digit of %d is %d  and is 0\n", n, a);
}
else
{
        printf("last digit of %d is %d and is less than 6 not 0\n", n, a);

}
return (0);
}
