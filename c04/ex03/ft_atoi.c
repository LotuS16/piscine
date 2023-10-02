#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str);

int main()
{
    char a[] = "  ---+--+1234ab567";
    printf("%d", ft_atoi(a));
}

int ft_atoi(char *str)
{
    int i = 0;
    int j = 0;

    while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' || *str == '\t' || *str == '\v')
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            j++;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        i *= 10;
        i += *str - '0';
        str++;
    }
    if(!(j % 2))
        return(i);
    return (-i);
}