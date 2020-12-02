#include <unistd.h>
#include <stdio.h>

extern char* ft_strcapitalize(char *str);

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s",str);
}
