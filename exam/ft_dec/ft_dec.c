#include <unistd.h>
#include <stdio.h>

void ft_dec(int *ptr)
{
   (*ptr)--;
}

int main() {
    int myVariable = 42;
    
    ft_dec(&myVariable);
    
    printf("Updated value: %d\n", myVariable);
    
    return 0;
}
