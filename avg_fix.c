#include <stdio.h>

int main(void){
	int i, numberOfNums=0, total=0, value;
	float average;

	printf("How many numbers are to be read: ");
	scanf("%d", &numberOfNums);

	for (i=0; i<numberOfNums; i++){
		scanf("%d", &value);
		total += value;
		printf("Read %d\n", value);
	}

	average = (float)total / numberOfNums;
	printf("You read %d values. Average = %f.\n", numberOfNums, average);
}
