#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>

char END_CHAR = '\0';

char* concat_str(char* s1, char* s2) {
  int i;
  int s1_len = strlen(s1);

  for (i = 0; s2[i] != '\0'; i++)
  {
    s1[i + s1_len] = s2[i];
  }
  s1[i + s1_len] = '\0';

  return s1;
}

string char_to_str(char _char) {
  static char str[2];
  str[0] = _char;
  str[1] = '\0'; 

  return str;
}

bool isLowercase(char c) {
  return c >= 'a' && c <= 'z';
}

char toUppercase(char c) {
  return c - 32;
}

int main(void) {
  string name = get_string("What's name ? \n");

  char uppercaseName[1000];
  strcpy(uppercaseName, "");

  int i = 0;
  while (i < strlen(name))
  {
    char c = name[i];
    if(isLowercase(c)) {
      char uppercase_char = toUppercase(c);
      string uppercase_str = char_to_str(uppercase_char);

      concat_str(uppercaseName, uppercase_str);
    } else {
      concat_str(uppercaseName, &c);
    }
    i++;
  }
  printf("Uppercase name: %s\n", uppercaseName);
}