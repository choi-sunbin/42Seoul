#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "abd";
	char *s2 = "abc";
	int value;
	
	value = strcmp(s2, s1);
	printf("%d\n", value);
}
