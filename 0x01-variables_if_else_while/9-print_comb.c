#include <stdio.h>
/**
  *main - Entry point
  *Description: 'get the last degiti of a number'
  *Return: always 0
  */
int main(void)
{
int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
}
	}
putchhar('\n');
return (0);
}
