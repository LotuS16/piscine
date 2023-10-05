#include <unistd.h>

int ft_print_numbers(int number)
{
  if(number > 9)
    ft_print_numbers(number / 10);
  write(1, &"0123456789"[number % 10], 1);
}

int main()
{
  int number;

  number = 1;
  while (number <= 100)
  {
    if (number % 3 == 0 && number % 5 == 0)
      write(1, "fizzbuzz", 8);
    else if (number % 5 == 0)
      write(1, "buzz", 4);
    else if (number % 3 == 0)
      write(1, "buzz", 4);
    else
      ft_print_numbers(number);
    write(1, "\n", 1);
    number++;
  }
  
}