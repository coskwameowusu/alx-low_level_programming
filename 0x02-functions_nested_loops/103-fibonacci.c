#include <stdio>
/**
 * file 103 - fibonacci numbers
 * print the sum if fibonacci number
 * Return: 0
 */

int main(void)
{

int i;
unsigned long int j, k, next, sum;
j = 1;
k = 2;

for (i = 1; i <= 33; i++)
{
if (j < 400000 && (j % 2) == 0)
{
sum = sum + j;
}
next = j + k;
j = k;
k = next;
}
printf("%lu\n", sum);
return (0);
}
