#include <cs50.h>
#include <stdio.h>

int main(void) {
  // int score1 = 72;
  // int score2 = 73;
  // int score3 = 33;
  // float avg = (score1 + score2 + score3) / (float) 3;

  int scores[3]; // 宣告array
  int SCORE_COUNT = 3;

  for (int i = 0; i < SCORE_COUNT; i++)
  {
    scores[i] = get_int("Score: ");   
  }
  float avg = (scores[0] + scores[1] + scores[2]) / (float) SCORE_COUNT;

  printf("Avg score: %f", avg);
}