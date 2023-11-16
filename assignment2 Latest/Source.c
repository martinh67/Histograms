#define _CRT_SECURE_NO_WARNINGS /* so that scanf can be used */
#include <stdio.h> /* include the input library */

int main(void)
{
	/* declare variables required */
	int number1, number2, number3, number4, number5;
	int status1, status2, status3, status4, status5;
	int counter;

	/* information about the program */
	printf("You will be asked to enter five integers (all between 1 and 30) to create a row of asterisks.\n");
	printf("\nPlease note that if you enter a float then the number will be truncated\n");

	/* obtain valid first number */
	do {
		printf("\nEnter first number between 1 and 30 : ");
		status1 = scanf("%d", &number1);

		/* if not a number or out with the bounds */
		if (status1 == 0 || number1 < 1 || number1 > 30)

		{
			printf("\nInvalid input for the first number, please try again\n");
			/* clear the data buffer */
			while (getchar() != '\n');
		}

		/* checks that number is within the bounds */
	} while (number1 < 1 || number1 > 30);

	/* if a number was entered */
	if (status1 == 1)
	{
		printf("\nThe first number is %d\n", number1);
		/* clear the data buffer incase a float was entered */
		while (getchar() != '\n');
	}

	/* obtain valid second number */
	do {
		printf("\nEnter second number between 1 and 30 : ");	
		status2 = scanf("%d", &number2);

		/* if not a number */
		if (status2 == 0 || number2 < 1 || number2 > 30)
		{

			printf("\nInvalid input for the second number, please try again\n");
			/* clear the data buffer */
			while (getchar() != '\n');
		}
		/* checks that number is within the bounds */
	} while (number2 < 1 || number2 > 30);

	/* if a number was entered */
	if (status2 == 1)
	{
		printf("\nThe second number is %d\n", number2);
		/* clear the data buffer incase a float was entered */
		while (getchar() != '\n');
	}


	/* obtain valid third number */
	do {
		printf("\nEnter third number between 1 and 30 : ");
		status3 = scanf("%d", &number3);

		/* if not a number */
		if (status3 == 0 || number3 < 1 || number3 > 30)
		{

			printf("\nInvalid input for the third number, please try again\n");
			/* clear the data buffer */
			while (getchar() != '\n');
		}
		/* checks that number is within the bounds */
	} while (number3 < 1 || number3 > 30);

	/* if a number was entered */
	if (status3 == 1)
	{
		printf("\nThe third number is %d\n", number3);
		/* clear the data buffer incase a float was entered */
		while (getchar() != '\n');
	}

	/* obtain valid fourth number */
	do {
		printf("\nEnter fourth number between 1 and 30 : ");
		status4 = scanf("%d", &number4);

		/* if not a number */
		if (status4 == 0 || number4 < 1 || number4 > 30)
		{
			printf("\nInvalid input for the fourth number, please try again\n");
			/* clear the data buffer */
			while (getchar() != '\n');
		}
		/* checks that number is within the bounds */
	} while (number4 < 1 || number4 > 30);

	/* if a number was entered */
	if (status4 == 1)
	{
		printf("\nThe fourth number is %d\n", number4);
		/* clear the data buffer incase a float was entered */
		while (getchar() != '\n');
	}

	/* obtain valid fifth number */
	do {
		printf("\nEnter fifth number between 1 and 30 : ");	
		status5 = scanf("%d", &number5);

		/* if not a number */
		if (status5 == 0 || number5 < 1 || number5 > 30)
		{
			printf("\nInvalid input for the fifth number, please try again\n");
			/* clear the data buffer */
			while (getchar() != '\n');
		}
		/* checks that number is within the bounds */
	} while (number5 < 1 || number5 > 30);

	/* if a number was entered */
	if (status5 == 1)
	{
		printf("\nThe fifth number is %d\n", number5);
		/* clear the data buffer incase a float was entered */
		while (getchar() != '\n');
	}

	/* informs user about the rows of asterisks*/
	printf("\n\nEach of the valid numbers displayed as a row of asterisks:\n\n");

	/* line of asterisks for number 1 */

	/* checks whether a number was entered */
	if (status1 == 1)
	{
		/* start the for loop */
		for (counter = 1; counter <= number1; ++counter)
		{
			/* print out asterisk */
			printf("*");
		}
		printf("\n");
	}

	/* line of asterisks for number 2 */

	/* checks whether a number was entered */
	if (status2 == 1)
	{
		/* start the for loop */
		for (counter = 1; counter <= number2; ++counter)
		{
			/* print out asterisk */
			printf("*");
		}
		printf("\n");
	}

	/* line of asterisks for number 3 */

	/* checks whether a number was entered */
	if (status3 == 1)
	{
		/* start the for loop */
		for (counter = 1; counter <= number3; ++counter)
		{
			/* print out asterisk */
			printf("*");
		}
		printf("\n");
	}

	/* line of asterisks for number 4 */

	/* checks whether a number was entered */
	if (status4 == 1)
	{
		/* start the for loop */
		for (counter = 1; counter <= number4; ++counter)
		{
			/* print out asterisk */
			printf("*");
		}
		printf("\n");
	}

	/* line of asterisks for number 5 */

	/* checks whether a number was entered */
	if (status5 == 1)
	{
		/* start the for loop */
		for (counter = 1; counter <= number5; ++counter)
		{
			/* print out asterisk */
			printf("*");
		}
		printf("\n");
	}

	return 0;
}