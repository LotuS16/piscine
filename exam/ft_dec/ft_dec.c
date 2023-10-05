#include <unistd.h>
#include <stdio.h>

void ft_dec(int *ptr)
{
    int i = 0;
    if(ptr[i] != '\0')
    {
        i--;
    }
}

int main() {
    int myVariable = 42;
    
    ft_dec(&myVariable);
    
    printf("Updated value: %d\n", myVariable);
    
    return 0;
}
