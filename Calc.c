#include <stdio.h>


int sum(int*); //declare my array for sum of 10 numbers
int main()
{
	// create some variables that allow the user to input 2 numbers
	int a, b, math;
	int c[10], i, s;
	/*Prompts the user to select a choice 1-4 that will determine the math to be done*/
	printf("Select an option: \n1. Addition\n 2. Subtraction\n 3. Multiplication\n 4.Division\n 5.Sum of 10 numbers\n\n");


	//takes the user input for their 1-4 calculation choice. (+-*/)
	scanf_s("%d", &math);

	// Added this if/else loop to notify the user they made an invalid choice
	if (math > 5)
	{
		printf("You entered an incorrect input\n");
	}
	else if (math == 1-4)
	{
		/*Asks the user to enter their two numbers for their math calculation*/
		printf("Enter two numbers for your calculation you have chosen in this format (a, b) \n***IF you have selected option 5, then you can skip this by entering 0 twice and move onto the next prompt to enter your numbers.");
		/*Takes the user input for a and b with "%d" format*/
		scanf_s("%d %d", &a, &b);
	}
	//if/else loops that will help determine which action to perform based on previous user input.
	if (math == 1) //Addition loop
	{
		printf("The Addition of %d and %d is %d\n", a, b, (a + b));
	}
	else if (math == 2) //Subtraction loop
	{
		printf("The Subtraction of %d and %d is %d\n", a, b, (a - b));
	}
	else if (math == 3) // Multiplication loop
	{
		printf("The Multiplication of %d and %d is %d\n", a, b, (a * b));
	}
	else if (math == 4) //Division loop
	{
		if (b != 0) //If/else loop statement that doesnt let users divide by 0
			printf("The Division of %d and %d is %d\n", a, b, (a / b));
		else
			printf("Number cannot be divided by 0\n");
	}
	else if (math == 5) //sum of numbers array
	{
		printf("\nEnter 10 numbers");
		for (i = 0; i < 10; i++)
			scanf_s("%d", &c[i]);

		s = sum(c); //Calling the function
		printf("\nSum = %d", s);
	}
	else // Lets the user know the inputs are wrong and which ones you can choose
	{
		printf("Please enter an option that is 1-5.\n");
	}

	return 0;
}
//array to determine the sum of 10 numbers
int sum(int* p)
{
	int i, s = 0;
	for (i = 0; i < 10; i++)
	{
		s = s + *p;  //value at address
		p++;
	}
	return s;
}