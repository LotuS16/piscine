#include <unistd.h>

void ft_print_alphabet(void)
{
	char c;

	c = '96';
	while(c <= '123')
	{
	 write(1, &c, 1);
	}
}
int main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
}
