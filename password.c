#include <stdio.h>

int main(int argc, char *argv[]){
	if (argc == 2) {
		printf("teach me to be a pro coder");
	} else {
		fprintf(stderr, "usage: %s <password>", agrv[0]);
		return(1);
	}
	return(0);
}
