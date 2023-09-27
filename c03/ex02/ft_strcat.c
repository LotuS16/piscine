#include <unistd.h>
#include <stdio.h>
#include <strings.h>

char *ft_strcat(char *dest, char *src);

int main()
{
    char s1[20] = "Hello ";
    char s2[] = "World !";
    printf("%s\n", ft_strcat(s1, s2));
    return 0;
}

char *ft_strcat(char *dest, char *src)
{
    int s1 = 0;
    int s2 = 0;
    while (dest[s1] != '\0')
    {
        s1++;
    }
    while (src[s2] !='\0')
    {
        dest[s1] = src[s2];
        s1++;
        s2++;
    }
    dest[s1] != '\0';
    return (dest);
}