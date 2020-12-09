#include <stdio.h>
#include <stdlib.h>


extern char *ft_strjoin(int size, char **str, char *sep);

int main()
{
	char *str[4] = {"AAA","BBB","CCC","DDD"};
	char *sep = ":";
	char **bin;
	char *result;
	
	bin = 0;
	result = ft_strjoin(0, bin, sep);
	printf("%s\n", result);

	result = ft_strjoin(4, str, sep);
	printf("%s\n", result);

	result = ft_strjoin(3, str, sep);
	printf("%s", result);
}
