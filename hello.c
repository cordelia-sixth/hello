#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *wd = getenv ("PWD");
  printf("%s\n", wd);
  return 0;
}