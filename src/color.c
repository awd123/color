#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i;

  if (sizeof(argv[1]) == 0) {
    return 1;
  }
  
  for (i = 0; i < strlen(argv[1]); i++) {
    if (i == (strlen(argv[1]) - 1)) {
      printf("\e[%d;3%dm%c\e[0m\n",
	     ((i < 8) ? 0 : 1),
	     ((i < 8) ? i : (i - 7)),
	     argv[1][i]);
    } else {
      printf("\e[%d;3%dm%c",
	     ((i < 8) ? 0 : 1),
	     ((i < 8) ? i : (i - 7)),
	     argv[1][i]);
    }
  }

  return 0;
}
