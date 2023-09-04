#include <stdio.h>

void main()
{
	int sum = 0;
	int A = 1;
	do {
		if(A % 2 == 0)
		sum = sum + A;
		A = A + 1;	
		
	}	
	while (A <= 100);
	printf("% d", sum);
}



void main()
{
	int sum = 0;
	int A = 1;
	do {
		if (A % 3 == 0)
			sum = sum + A;
		A = A + 1;

	} while (A <= 100);
	printf("% d", sum);
}


void main()
{
	int sum = 0;
	int A = 1;
	do {
			sum = sum + A;
		A = A + 1;

	} while (A <= 100);
	printf("% d", sum);
}
