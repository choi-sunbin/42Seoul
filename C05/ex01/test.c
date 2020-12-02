#include <stdio.h>

extern int	ft_iterative_factorial(int nb);
extern int	ft_recursive_factorial(int nb);

int main()
{
	int a;
	a = ft_recursive_factorial(12);
	printf("%d", a);
}
