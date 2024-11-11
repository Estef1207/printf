#ifndef PRINTF
# define PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <limits.h>

#define	BUFFER_SIZE (1<<12)

typedef	enum
{
	OK = 0,
	MALLOC_ERROR = -123,
	PARSE_ERROR = -42,
}		e_error


typedef struct	s_format
{
	bool	justified;
	bool	sing;
	bool 	space;
	bool	hash;
	bool	zero;
	char	specifier;
	int	width_len;
	int	precision_value;
}			t_format;

typedef struct	s_data
{
	const char	*s;
	va_list	argp

	int	count_char;
	char	*buf;
	int	buffer_i;

	t_format	format;
}			t_data;
