#include <stdio.h>

extern int	ft_iterative_factorial(int nb);
extern int	ft_iterative_power(int nb, int power);
int main()
{
	int a;
	a = ft_iterative_power(5, 3);
	printf("%d", a);
}
