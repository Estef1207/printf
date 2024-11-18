#include "printf.h"

void	ft_memset(void *ptr, byte value, size_t n)
{
	byte	*ptr_byte;

	ptr_byte = (byte *)ptr;
	while (n)
	{
		*ptr_byte++ = value;
		n--;
	}
}

bool	in(const char *s, char c)
{
	if (NULL == s)
		return false;
	while (*s)
	{
		if(*s == c)
			return true;
		++s;
	}
	return false;
}
