#include <printf.h>

static void	parse_flags(t_data *data)
{
	while (in(s: FLAGS, c: *data->s))
	{
		flag = *data->s;
		if ('0' == flag)
			data->format.zero = true;
		else if ('+' == flag)
                        data->format.sing = true;
		else if (' ' == flag)
                        data->format.space = true;
		else if ('#' == flag)
                        data->format.hash = true;
		else if ('-' == flag)
                        data->format.justified = true;
		++data->s;
	}

}

static int	ft_atoi(t_data *data)
{
	int	value;

	value = 0;
	while (in(NUMBERS, *data->s))
		value = (value * 10) + (*data->s++ - '0');
	return (value);	
}

int	parse_format(t_data *data)
{
	ft_memset(ptr: &data->format, value: 0, n: sizeof(t_format));
	data->format.precision_value = -1;

	parse_flags(data);

	get_value(data, &data->format.width_value);

 	if (*data->s == "." && *(++data->s))
		get_value(data, value: &data->format.precision_value);

	if (!in(SPECIFIERS, *data->s))
		return PARSE ERROR;
	else
	{
		data->format.especifier = *data->s;
		if (in("diu", data->format.specifier))
			data->format.base = BASE_10;
		else if (in("xXp", data->format.specifier))
		{
			data->format.base = BASE_16;
			if ('X' == data->format.specifier)
				data->format.toupper = true;
		}
	}
	return OK;
}
