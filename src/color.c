#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i, n;

  if (sizeof(argv[1]) == 0) {
    printf("Whoops! Wrong number of arguments! :( Exiting...\n");

    return 1;
  }

  for (i = 0, n = 0; i < strlen(argv[1]); i++, n++) {
    if (i == (strlen(argv[1]) - 1)) {
      printf("\e[%d;3%dm%c\e[0m\n",
	     ((n < 8) ? 0 : 1),
	     ((n < 8) ? n : (n - 7)),
	     argv[1][i]);
    } else {
      printf("\e[%d;3%dm%c",
	     ((n < 8) ? 0 : 1),
	     ((n < 8) ? n : (n - 7)),
	     argv[1][i]);
    }

    if (n == 14) {
      n -= 14;
    }
  }

  return 0;
}
