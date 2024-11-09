void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main()
{
	char *arg_ppal = "hola como estas";
	unsigned int	i;
	int		count;
	
	i = 0;
	count = 0;
	if (!arg_ppal)
		return (NULL);
	while(arg_ppal[i])
	{
		print_res[i] = ft_memcpy(respritf, arg_ppal[i], 1);
		if (arg_ppal[i] == %)
		{
			i++;
			if (arg_ppal[i] == 'c')
				pasa tal cosa
			if (arg_ppal[i] == 's')
				pasa tal cosa
			if (arg_ppal[i] == 'p')
				pasa tal cosa
			if (arg_ppal[i] == 'd')
				pasa tal cosa
			if (arg_ppal[i] == 'i')
				pasa tal cosa
			if (arg_ppal[i] == 'u')
				pasa tal cosa
			if (arg_ppal[i] == 'x')
				pasa tal cosa
			if (arg_ppal[i] == 'X')
				pasa tal cosa
			if (arg_ppal[i] == '%')
				pasa tal cosa
			if (arg_ppal[i] == '#')
				pasa tal cosa
			if (arg_ppal[i] == ' ')
				pasa tal cosa
			if (arg_ppal[i] == '+')
				pasa tal cosa
		}	
		i++;
	}

}
