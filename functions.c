void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}






static	init_data(t_data *data, const char *format)
{
	data->count_char = 0;
	data->s = format;
	data->buf = malloc(BUFFER_SIZE * sizeof(char));
	if (NULL == data->buf)	
		return MALLOC_ERROR;
	data->buffer_i = 0;
	ft_memset(data->buf, 0, BUFFER_SIZE * sizeof(char));
	return OK;
}


int	ft_printf(const char *format, ...) 
{
	t_data	data;
	//init data
	va_start(data.argp, format);
	if (init_data(&data, format))
		return -1;
	while(*data.s)
	{
		if(*data.s == '%' && *(++data.s)) 
		{
			if (parse_format(&data))
			{

				return PARSE_ERROR;
			}
			render_formar(&data)
		}
		else
		{
			write_buf(&data, *data.s);
		}
		++data.s;
	}
	flush_buf(&data);
	va_end(data.argp)
	free(data.buf)
	return (data.count_char);