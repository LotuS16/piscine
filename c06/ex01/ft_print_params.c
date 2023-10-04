#include <unistd.h>

#include <unistd.h>

int main(int gc, char **gv)
{
    int i = 1;
    int j = 0;
    while (i < gc)
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
    return 0;
}
