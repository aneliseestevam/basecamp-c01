void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	size -= 1;
	while (i < size)
	{
		ft_swap(&tab[i++], &tab[size--]);
	}
}
