#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
    int i = ft_recursive_factorial(6);
    printf("%d\n", i);
    return 0;
}

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return 0; 
    else if (nb <= 1)
        return 1;
    else
        return nb * ft_recursive_factorial(nb - 1);
}