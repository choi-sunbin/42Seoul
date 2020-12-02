#include <stdio.h>

extern int ft_atoi_base(char *str, char *base);

int main()
{
	int value;
	char c[] = "    +---+++--BBCCDDEFG";
	char d[] = "ABCDEFGHIJ";

	value = ft_atoi_base(c, d);
	printf(" Value = %d\n", value);
	
}
