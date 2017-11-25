#include <stdio.h>
int addfunc(int a, int b)
{
	return a + b;
}

int main(void)
{
	int a = 0;
	int b = 5;
	int c = 0;

	c = a + b;
	printf("c = 0x%x\n", c);
        c = addfunc(a, b);
	printf("c = %d\n", c);

	return c;
}
