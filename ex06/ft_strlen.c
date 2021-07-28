int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i++])
	{
		count++;
	}
	return (count);
}
