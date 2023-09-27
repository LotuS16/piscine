#include <unistd.h>
#include <stdio.h>
#include <strings.h>

int ft_strlen(char *str);

int main()
{
    char myString[] = "hello";
	printf("%d", ft_strlen(myString));
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}