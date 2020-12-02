#include <stdio.h>

extern int	ft_iterative_factorial(int nb);
extern int	ft_iterative_power(int nb, int power);
extern int	ft_recursive_power(int nb, int power);
extern int  ft_recursive_factorial(int nb);

int main()
{
	int a;
	a = ft_recursive_power(5, 4);
	printf("%d", a);
}

