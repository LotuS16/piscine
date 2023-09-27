#include <unistd.h>
#include <stdio.h>
#include <strings.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
    char s1[] = "Hello World";
    char s2[] = "or";
    printf("%s\n", ft_strstr(s1, s2));
    return 0;
}

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    if(to_find[j] == '\0')
    {
        return str;
    }
    while (str[i] != '\0')
    {
        if(str[i] == to_find[j])
        {
            i++;
            j++;
        }
        else
        {
            str++;
            i = 0;
            j = 0;
        }
        if (to_find[j] == '\0')
            return str;
    }
    return (NULL); 
}