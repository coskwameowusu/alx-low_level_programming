#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Positive or Negative
* Return:0 (succes)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 0) > 5
{
	printfO("last digit of %d and is greater than 5\n", n n % 10);
}
else if (n % 10)<6 && (n % 10)!= 0
{
	printfO("last digit of %d and is less than 6 not 0\n", n n % 10);
}
else 
{
	 printfO("last digit of %d is %d and is 0\n", n n % 10);

}
return (0);
}
