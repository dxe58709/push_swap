#include "push_swap.h"

bool  check_args(const char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!isdigit(str[i]) && !isspace(str[i]))
      return false;
    i++;
  }
  return true;
}

