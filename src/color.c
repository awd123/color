#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  void colorize(char *string);

  if (argc == 1)
  {
    char str[1024];
    int extra;
    int chr;
    while (1)
    {
      printf(">");
      fflush(stdout);
      if (fgets(str, sizeof str, stdin) == NULL)
        return 0;
      colorize(str);
    }
  }
  else
    colorize(argv[1]);

  return 0;
}

void colorize(char *string) {
  int i;
  int n;

  for (i = 0, n = 0; i < strlen(string); i++, n++)
  {
    if (i == (strlen(string) - 1))
      printf("\e[%d;3%dm%c\e[0m\n",
              ((n < 8) ? 0 : 1),
              ((n < 8) ? n : (n - 7)),
              string[i]);
    else
      printf("\e[%d;3%dm%c",
              ((n < 8) ? 0 : 1),
              ((n < 8) ? n : (n - 7)),
              string[i]);

    if (n == 14)
      n -= 14;
  }
}
