#include <cs50.h>
#include <stdio.h>

int main(void) {
  int QUESTION_BLOCK_AMOUNT;
  do {
    QUESTION_BLOCK_AMOUNT = get_int("How many blocks?\n");
  } while(QUESTION_BLOCK_AMOUNT < 1);

  for(int i = 0; i < QUESTION_BLOCK_AMOUNT; i++) {
    for(int j = 0; j < QUESTION_BLOCK_AMOUNT; j++) {
      printf("#");  
    }
    printf("\n");
  }
}