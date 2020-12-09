int		ft_strlen(char* str)	
{
	int loop;

	loop = 0;
	while (str[loop] != 0)
	{
		loop++;
	}
	return (loop);
}
