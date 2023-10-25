#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void) {
  string name = get_string("What's your name?\n");
  // int n = 0;
  // while (name[n] != '\0') // end of char 
  // {
  //   n ++;
  // }
  int n = strlen(name);
  printf("name length: %i\n", n); 
}