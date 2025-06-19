#include <stdio.h>
/**
  *main-Entry point of the program
  *
  *This program prints all possible combinations of :
  *single digit numbers separated by ', '
  */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
	putchar (x);
	if (x != '9')
{
	putchar (',');
	putchar (' ');
}
}
putchar ('\n');
return (0);
}
