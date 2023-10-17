#include <cs50.h>
#include <stdio.h>

char* convert_int_to_char(int number) {
	int x = number;
	static char int_str[20]; // for store string
	sprintf(int_str, "%d", x);
	return int_str;
}

int main(void) {
	int x = get_int("What's X?");
	// char int_str[20]; // for store string
	// sprintf(int_str, "%d", x);

	printf("X is %s\n", convert_int_to_char(x));
}
