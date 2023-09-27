#include <unistd.h>
#include <stdio.h>
#include <strings.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char s1[20] = "Hello ";
    char s2[] = "World !";
    printf("%s\n", ft_strncat(s1, s2, 3));
    return 0;
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int s1 = 0;
    unsigned int s2 = 0;

    while (dest[s1] != '\0')
    {
        s1++;
    }
    while (src[s2] !='\0' && s2 < nb)
    {
        dest[s1] = src[s2];
        s1++;
        s2++;
    }
    dest[s1] != '\0';
    return (dest);
}