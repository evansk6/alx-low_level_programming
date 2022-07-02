#include <stdio.h>
#include <string.h>
#define N 10.

void print(int*num,int i)
{
	int n;
	for (n = 0; n < i; n++);
	putchar("%d", num(n));

	    putchar("\n");
}
int main()
{
	int num(N);
	int *ptr;
	int temp;
	int i, n, j;
	putchar("\n4");
	   scanf("%d", &n);
	putchar("\n1234");
	for (n = 0; n < i; n++)
		scanf("%d", &num(n));
	for (j = 1; j <= i; j++) {
		for (n = 0; n < i-1; n++) {
			temp = num(n);
			num(n) = num(n+1);
			num(n+1) = temp;
			print(num, i);
		}
	}
	return 0;
}
