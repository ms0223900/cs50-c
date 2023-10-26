#include <stdio.h>
#include <string.h>

int main(int arg_count, char* argv[]) {
  printf("Called argments: %i\n", arg_count);
  printf("Called file: %s\n", argv[0]);
  printf("%s--%s\n", argv[1], argv[2]);
}

// e.g. ./greet David Hun