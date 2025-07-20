#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){


	int ope;
    double firstNum;
   	double secondNum;
	double result;
	int cont;

do {
    
    	printf("Enter a symbol below:\n1 -> +(addition)\n2 -> -(substraction)\n3 -> *(multiplication)\n4 -> /(division)\n5 -> ^(power)\n6 -> v(sqrt)\n7 -> (sin)\n8 -> (cos)\n9 -> (tan)\n");
    	//scanf("%d", &operator);
    	scanf("%d", &ope);
    	
		printf("Enter a number: ");
    	scanf("%lf", &firstNum);

    	
	if (ope == 1)
	{
		printf("Enter Second number: ");
    	scanf("%lf", &secondNum);
		result = firstNum + secondNum;
	}

	else if (ope == 2)
	{
		printf("Enter Second number: ");
    	scanf("%lf", &secondNum);
		result = firstNum - secondNum;
	}

	else if (ope == 3)
	{
		printf("Enter Second number: ");
    	scanf("%lf", &secondNum);
		result = firstNum * secondNum;
	}
	else if (ope == 4)
	{
		printf("Enter Second number: ");
    	scanf("%lf", &secondNum);
		result = firstNum / secondNum;
	}
	else if (ope == 5)
	{
		printf("Enter Second number: ");
    	scanf("%lf", &secondNum);
		result = pow(firstNum, secondNum);
	}
	else if (ope == 6)
	{
		result = sqrt(firstNum);
	}
	else if (ope == 7)
	{
		result = sin(firstNum);
	}
	else if (ope == 8)
	{
		result = cos(firstNum);
	}
	else if (ope == 9)
	{
		result = tan(firstNum);
	}
	else 
	{
		printf ("Incorrect Input\n");
		break;
	}

    
	printf ("The result is equal to: %lf\n", result);
	printf ("Continue? (1 for yes, 0 for no)\n");
	scanf ("%d", &cont);

} while (cont == 1);
	
	
	return 0;
	
}
