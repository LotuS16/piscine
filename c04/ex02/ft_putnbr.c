#include <unistd.h>

void ft_putnbr(int nb);

int main()
{
    ft_putnbr(42);
}

void ft_putchar(int c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb == -2147483647)
    {
        ft_putchar('-');
        ft_putnbr('2');
        ft_putchar(147483647);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}