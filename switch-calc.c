#include <stdio.h>

int main()
{
	double num1;
	double num2;
	char operator;
	double output;
	
	while(1 == 1)
	{
		scanf("%lf %c %lf", &num1, &operator, &num2);

		switch(operator){

		case '+' :
		output = num1 + num2; 
		break;

		case '-' :
		output = num1 - num2;
		break;

		case '/' :
		output = num1 / num2;
		break;

		case '*' :
		output = num1 * num2;
		break;
		}

	printf("%lf\n", output);

	}

}
