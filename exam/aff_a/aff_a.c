#include <unistd.h>

int main(int ac, char **av) {
    if(ac != 2 || av[1][0] != 'a')
        write(1, "a\n", 2);
    else
        write(1, "a\n", 2);
    return 0;
}