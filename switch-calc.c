#include <stdio.h>

int main()
{
	int one = 1;
	double num1;
	double num2;
	char operator;
	double output;
	
	while(one = 1)
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
