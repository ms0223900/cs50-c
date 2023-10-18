#include <cs50.h>
#include <stdio.h>

// 事先聲明function才行
int get_size(void); 
void print_grid(int block_amount); 

int main(void) {
  int size = get_size();
  print_grid(size);
}

int get_size(void) {
  int QUESTION_BLOCK_AMOUNT;

  do {
    QUESTION_BLOCK_AMOUNT = get_int("How many blocks?\n");
  } while(QUESTION_BLOCK_AMOUNT < 1);

  return QUESTION_BLOCK_AMOUNT;
}

void print_grid(int block_amount) {
  for(int i = 0; i < block_amount; i++) {
    for(int j = 0; j < block_amount; j++) {
      printf("#");  
    }
    printf("\n");
  }
}