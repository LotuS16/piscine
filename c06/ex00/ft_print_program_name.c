#include <unistd.h>

int main(int gc, char **gv)
{
    if (gc <= 0)
        return 0;
    int i = 0;
    while (gv[0][i] != '\0') 
    {
        write(1, &gv[0][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;  
}
