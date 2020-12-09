#include <unistd.h>

int		is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	print_first_word(char *str)
{
	int		loop;
	int 	offset;
	char 	*word;

	loop = 0;
	word = str;
	while (is_space(str[loop]))
		loop++;
	offset = loop;
	while (1)
	{
		if (str[loop] == '\0')
			break;
		if (is_space(str[loop]))
			break;
		loop++;
	}
	if (word != 0)
		write(1, word + offset, loop - offset);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_first_word(argv[1]);
	write(1, "\n", 1);
}
