// game with integers

#include<stdio.h>

int main (void)
{
	int testcases;
	int number[100];
	scanf("%d", &testcases);

	for (int i=0; i < testcases; i++)
	{
	    scanf("%d", &number[i]);

	}

	for (int i=0; i < testcases; i++)
	{


		if ((number[i] +1) % 3 == 0 || (number[i] -1) % 3 == 0 )
		{
			printf("\nFirst");

		}

		else
		{
			printf("\nSecond");

		}

	}
}



