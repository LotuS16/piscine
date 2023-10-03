#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
    int i = ft_iterative_factorial(9);
    printf("%d\n", i);
    return 0;
}

int ft_iterative_factorial(int nb)
{
    int i = 1;
    if (nb < 0)
        return 0;
    if (nb == 0)
        return 1;
    while (nb > 0)
    {
        i *= nb;
        nb--;
    }
    return (i);
}