#include <cs50.h>
#include <stdio.h>

int main(void) {
  string words[2];

  words[0] = "hi!!";
  words[1] = "你好!";

  printf("%c%c%c%c\n", words[0][0], words[0][1], words[0][2], words[0][3]);

  printf("%c%c%c\n", words[1][0], words[1][1], words[1][2]); // 你
  printf("%c%c%c\n", words[1][3], words[1][4], words[1][5]); // 好
  printf("%c\n", words[1][6]); // !
}