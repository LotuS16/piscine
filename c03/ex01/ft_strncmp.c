#include <unistd.h>
#include <stdio.h>
#include <strings.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char s1[] = "adad";
    char s2[] = "adada";
    int res = ft_strncmp(s1, s2, 5);
    printf("banding : %d\n", res);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if(s1[i] != s2[i])
        {
            return (s1[i] - s2[i]); 
        }
        i++;
    }
    return 0;
}