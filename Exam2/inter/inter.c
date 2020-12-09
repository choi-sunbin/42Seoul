#include <unistd.h>

int		g_check[256];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter_process(char *str1, char *str2)
{
	int loop;
	int loop2;
	int char_pos;

	loop = 0;
	while(str1[loop] != 0)
	{
		loop2 = 0;
		while(str2[loop2] != 0)
		{
			if (str2[loop2] == str1[loop])
			{
				char_pos = (int)str1[loop];
				if (g_check[char_pos] != 1)
				{
					g_check[char_pos] = 1;
					ft_putchar(str1[loop]);
				}
			}
			loop2++;
		}
		loop++;
	}
}

int		main(int argc, char **argv)
{
	int loop;

	loop = 0;
	while (loop < 256)
		g_check[loop++] = 0;
	if (argc == 3)
	{
		inter_process(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
