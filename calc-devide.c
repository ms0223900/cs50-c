#include <cs50.h>
#include <stdio.h>

int main(void) {
  long x = get_long("X: ");
  long y = get_long("Y: ");

  double res = (double) x / (double) y;
  printf("Answer: %.20f\n", res);
}