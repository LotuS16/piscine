#include <unistd.h>

void ft_print_numbers(void)
{
    char c;

    c = '47';
    while(c < '58')
    {
        write(1, &c, 1);
    }
}

int main(void)
{
    ft_print_numbers();
    write(1, "\n", 1);
}
