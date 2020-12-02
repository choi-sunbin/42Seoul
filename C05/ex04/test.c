#include <stdio.h>

extern int	ft_iterative_factorial(int nb);
extern int	ft_iterative_power(int nb, int power);
extern int	ft_fibonacci(int index);

int main()
{
	int a;
	a = ft_fibonacci(5);
	printf("%d", a);
}
