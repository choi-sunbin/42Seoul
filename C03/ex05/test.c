#include <stdio.h>
#include <string.h>

extern	unsigned int ft_strlcat(char *dest, char *src, unsigned int nb);

int main()
{
	char s1[30];
	char *s2 = "abc";
	int loop;
	int value;

	loop = 0;
	while(loop < 30)
	{
		if(loop < 10)
			s1[loop] = '0' + (char)loop;
		else 
			s1[loop] = 0;
		loop++;
	}
	s1[loop] = 0;
	
	value = ft_strlcat(s1, s2, 2);
	printf("%d\n", value);
	printf("%s\n", s1);
	
	loop = 0;
	while(loop < 30)
	{
		if(loop < 10)
			s1[loop] = '0' + (char)loop;
		else 
			s1[loop] = 0;
		loop++;
	}
	s1[loop] = 0;
	value = strlcat(s1, s2, 2);
	printf("%d\n", value);
	printf("%s\n", s1);
}
