/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Takes input from Command Line
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input<0)
	{
		printf("Sqrt of %d is %fi\n", input, sqrt(-input));
	}
	else printf("Sqrt of %d is %f\n",input,sqrt(input));
<<<<<<< HEAD
	printf("End of program. Bye!.\n");
=======
	printf("End of program. Ciao!.\n");
>>>>>>> br_negativeSUpport
	return (0);

} // end main
