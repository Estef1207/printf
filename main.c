#include "printf.h"

void	test_char()
{
{
    // Imprime el resultado de ft_printf
	printf("Y\"\\tmine_CHARS=%d\"RST\n",
		ft_printf("This is a char " Y "[%c]" RST "\n", 'A'));

	// Imprime el resultado de printf
	printf("G\"\\treal_CHARS=%d\"RST\n", 
		printf("This is a char " G "[%c]" RST "\n", 'A'));
}
/*

        printf("Y""\tmine_CHARS=%d""RST\n",
                ft_printf(format: "This is a char "Y"[%10c]"RST"\n", 'A'));
        printf("G""\treal_CHARS=%d"RST"\n\n",                                                      printf("This is a char "G"[%10c]"RST"\n", 'A'));


        printf(Y"\tmine_CHARS=%d"RST"\n",
                ft_printf(format: "This is a char "Y"[%-10c]"RST"\n", 'A'));
        printf(G"\treal_CHARS=%d"RST"\n\n",                                                      printf("This is a char "G"[%-10c]"RST"\n", 'A'));


        printf(Y"\tmine_CHARS=%d"RST"\n",
                ft_printf(format: "This is a char "Y"[%-*c]"RST"\n", 'A'));
        printf(G"\treal_CHARS=%d"RST"\n\n",                                                      		printf("This is a char "G"[%-*c]"RST"\n", 'A'));
}*/
int	main()
{
	test_char();
}
