#include <cs50.h>
#include <stdio.h>

int main(void) {
	char answer = get_char("Do you agree?\n");	

	if(answer == 'y' || answer == 'Y') {
		printf("Agreed :)\n");
	}

	if(answer == 'n' || answer == 'N') {
		printf("Not agreed :)\n");
	}
}
