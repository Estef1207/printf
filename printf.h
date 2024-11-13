#ifndef PRINTF
# define PRINTF

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <limits.h>

#define	BUFFER_SIZE (1<<12)

// Colores con atributo BOLD
#define RST	"\033[0m"	//Reset
#define O	"\033[1;33m"	//Yellow
#define R	"\033[1;31m"	//Red
#define G	"\033[1;32m"	//Green
#define Y	"\033[1;33m"	//Yellow
#define B	"\033[1;34m"	//Blue
#define M	"\033[1;35m"	//Magenta


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


void    ft_memset(void *ptr, byte value, size_t n);
bool    in(const char *s, char c);
int     parse_format(t_data *data);
void    write_buf(t_data *data, char c);
void	putchar_buf_n(char c, int precision, t_data *data);
void    print_char(t_data *data, int c);



#endif














