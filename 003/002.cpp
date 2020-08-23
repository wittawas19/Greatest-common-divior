#include <stdio.h>

int main()
{
	int num1, num2, x = 2, i = 1;
	printf("Enter frist number : ");
	scanf_s("%d", &num1);
	printf("Enter second number : ");
	scanf_s("%d", &num2);
	while (x < num1 && x < num2)
	{
		if (num1 % x == 0 && num2 % x == 0)
		{
			num1 = num1 / x;
			num2 = num2 / x;
			i = i * x;
			x = 2;

		}
		else
		{
			x += 1;
		}
		
	}
	printf("Greatest common divior %d", i);
}