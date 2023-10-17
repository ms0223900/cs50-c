#include <cs50.h>
#include <stdio.h>

int main(void) {
  int MEOW_TIMES = get_int("How many meow times?\n");
  int i = 0;

  while(i < MEOW_TIMES) {
    printf("Meow :)\n");
    i++;
  }
}