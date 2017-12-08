#include <stdio.h>
int addfunc(int a, int b)
{
	return a + b;
}
int mutilfunc(int a, int b)
{
	return a*b;
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
	c = mutilfunc(a, b);
	printf("c = %d\n", c);
	//master try
	//test
	//I test git diff again
	return c;
}

void display(void)
{
	printf("It is a beautiful world\n");
	return 0;
}
