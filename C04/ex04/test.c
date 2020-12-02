#include <stdio.h>

extern void ft_putnbr_base(int nbr, char *base);

int main()
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(6 ,"10");
	//printf("\n");
	//ft_putnbr_base(2147483647, "0123456789");
	
}
