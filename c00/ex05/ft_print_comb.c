#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(char a, char b, char c)
{
    ft_putchar(a + '0');
    ft_putchar(b + '0');
    ft_putchar(c + '0');
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;
    int flag;
    int i;

    i = 0;
    flag = 0;
    while (i < 1000)
    {
        a = i / 100 % 10;
        b = i / 10 % 10;
        c = i / 1 % 10;
        if (a < b && b < c)
        {
            if (flag == 1)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            ft_putnbr(a, b, c);
            flag = 1;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb();
    return 0;
}
