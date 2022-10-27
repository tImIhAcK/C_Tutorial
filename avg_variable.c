#include <stdio.h>

int main(void)
{
	int i, numberOfNums=0, total=0, value, valsRead;
	float average;
	
	valsRead=scanf("%d", &value);
	
	while(valsRead > 0){
		if (value < 0){
			valsRead = scanf("%d", &value);
			continue;
		}
		numberOfNums++;
		total += value;
		printf("Read %d\n", value);
		valsRead = scanf("%d", &value);
	}

	average = (float)total / numberOfNums;
	printf("You read %d values. Average = %f.\n", numberOfNums, average);
}
