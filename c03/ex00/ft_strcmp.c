#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;

    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            return (s1[i]-s2[i]);
        }
        i++;
    }
    return (0);
}

int main()
{
    char s1[] = "allo";
    char s2[] = "all";
    int res = ft_strcmp(s1, s2);

    printf("test : %d\n", res);
}