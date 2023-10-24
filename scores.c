#include <cs50.h>
#include <stdio.h>

const int SCORE_COUNT = 5;
float average(int arr[]); // 事先宣告

int main(void) {
  int scores[SCORE_COUNT]; // 宣告array, 在C中，一定要事先規範好array的長度

  for (int i = 0; i < SCORE_COUNT; i++)
  {
    scores[i] = get_int("Score: ");   
  }
  // float avg = (scores[0] + scores[1] + scores[2]) / (float) SCORE_COUNT;
  float avg = average(scores);

  printf("Avg score: %f", avg);
}

float average(int arr[]) {
  int sum = 0;
  for (int i = 0; i < SCORE_COUNT; i++)
  {
    sum += arr[i];
  }
  return sum / (float) SCORE_COUNT;
}