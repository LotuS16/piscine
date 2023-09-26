#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	short c;

	c = '123' ;
	while(c >= '96')
	{
	 write(1, &c, 1);
	}
}

int main(void)
{
    ft_print_reverse_alphabet();
    write(1, "\n", 1);
}
