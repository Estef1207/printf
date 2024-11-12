#ifndef PRINTF
# define PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <limits.h>

#define	BUFFER_SIZE (1<<12)

typedef unsigned char	byte;

#define FLAGS		"+ 0-#"
#define NUMBERS		"0123456789"
#define SPECIFIERS	"cspidxXu"

typedef	enum
{
	OK = 0,
	MALLOC_ERROR = -123,
	PARSE_ERROR = -42,
}		e_error;

typedef	enum
{
	BASE_2 = 2,
	BASE_8 = 8,
	BASE_10 = 10,
	BASE_16 = 16,
}		e_base;

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
	bool 	toupper;
	e_base	base;
}			t_format;

typedef struct	s_data
{
	const char	*s;
	va_list		argp

	int	count_char;
	char	*buf;
	int	buffer_i;

	t_format	format;
}			t_data;


void    ft_memset(void *ptr, int value, size_t n);
bool    in(const char *s, char c);
int     parse_format(t_data *data);