#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * 
 * Return : always return 0
 */
int main(void)
{
int n;
int 1astn;
srand(time(0));
n = rand() - RAND_MAX / 2;
1astn = n % 10;
if (1asten > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n 1asten);
}
else if (1asten == 0)
{
printf("last digit of %d is %d is 0\n", n, 1asten);
}
else
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, 1asten);
}
return (0);
}
