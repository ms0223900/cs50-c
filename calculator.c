#include <cs50.h>
#include <stdio.h>

int main(void) {
  long x = get_long("X: ");
  long y = get_long("Y: ");
  printf("Answer: %li\n", x + y);
}