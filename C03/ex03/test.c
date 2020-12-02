#include <stdio.h>
#include <string.h>

extern char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char s1[30];
	char *s2 = "abc";
	int loop;

	loop = 0;
	while(loop < 30)
	{
		if(loop < 10)
			s1[loop] = '0' + (char)loop;
		else 
			s1[loop] = 0;
		loop++;
	}
	ft_strncat(s1, s2, 2);
	printf("%s\n", s1);
}
