#include <stdio.h>

/* coumputing factorial */
int main(void){
	int answer = 1;
	int i;

	for (i=2; i<=10; i++){
		answer *= i;
	}
	printf("Answer = %d\n", answer);
	return (0);
}
