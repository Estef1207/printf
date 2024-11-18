#include "printf.h"

void	print_char(t_data *data, int c)
{
	int	width;

	width = data->format.width_value;
	if (width > 1)
	{
		if (data->format.justified)
		{
			putchar_buf_n(c: (char)c, precision: 1, data);
			putchar_buf_n(c: ' ', precision: width - 1, data);
		}
		else
		{
			putchar_buf_n(c: ' ', precision: width - 1, data);
			putchar_buf_n(c: (char)c, precision: 1, data);
		}
	}
	putchar_buf_n(c: (char)c, precision: 1, data);
}
