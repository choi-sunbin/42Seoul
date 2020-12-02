#include <stdio.h>

extern int	ft_iterative_factorial(int nb);
extern int	ft_is_prime(int nb);

int main()
{
	int a;
	a = ft_is_prime(664579);
	printf("%d", a);
}
