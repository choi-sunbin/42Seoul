#include <stdio.h>
#include <string.h>

extern int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char *s1 = "abd";
	char *s2 = "abc";
	int value;
	
	value = ft_strncmp(s2, s1, 2);
	printf("%d\n", value);
	
	value = ft_strncmp(s2, s1, 3);
	printf("%d\n", value);
}
