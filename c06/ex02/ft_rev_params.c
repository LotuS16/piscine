#include <unistd.h>

int main(int gc, char **gv)
{
    int i = 0;
    int j = 0;
    i = gc - 1;
    while (i > 0)
    {
        j = 0;
        while (gv[i][j] != '\0')
        {
            write(1, &gv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i--;
    }
    return (0);
}