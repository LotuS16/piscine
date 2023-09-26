#include <unistd.h>

void ft_is_negative(void)
{
  char n;
  
  n = -1;
  if(n <= 0)
  	write(1, "N", 1);
  else
  {
	write(1, "P", 1);
  }
}

int main()
{
  ft_is_negative();
  write(1, "\n", 1);
}
