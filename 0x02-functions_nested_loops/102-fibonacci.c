#include <stdio.h>
/**
 * main - fibonacci numbers
 * sepaated by commas.
 * Return: 0
 */

int main(void)
{
int count;
unsigned long a = 0, b = 1, sum;
for (count = 0; count < 50; count++)
{
sum = a + b;
printf("%lu", sum);

a = b;
b = sum;

if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
