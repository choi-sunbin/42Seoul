#include <stdio.h>
#include <string.h>

extern char	*ft_strcat(char *dest, char *src);

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
	ft_strcat(s1, s2);
	printf("%s\n", s1);
}
