#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int ft_atoi(char *str);

int main()
{
	int b;
	char a[] = "1234567890";

	b = atoi(a);

	printf("%d", b);
}
