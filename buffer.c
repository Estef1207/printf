#include "printf.h"

void	flush_buf(t_data *data)
{
	data->count_char += write(STDOUT_FILENO,
				data->buf,
				data->buffer_i);
	ft_memset(data->buf, 0, BUFFER_SIZE);
	data->buffer_i = 0;
}

void	write_buf(t_data *data, char c)
{
	if (data->buffer_i == BUFFER_SIZE)
		flush_buf(data);
	data->buf[data->buffer_i++] = c;
}

void	putchar_buf_n(char c, int precision, t_data *data)
{
	if (precision <= 0)
		return ;
	while (precision--)
		write_buf(data, c);
}
